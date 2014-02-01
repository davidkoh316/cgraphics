/////////////////////
// Animation stuff //
/////////////////////
template <class Vector>
void ParameterSamples<Vector>::setCurrentValue(double t,int type)
{
    Vector pk, pk1add, pk1minus, pk2add;
    Vector p0, p1, p0prime, p1prime;
        
    double d, d2, d3, s;
    double c0, c1, c2, c3;
    double tempB_0,tempB_1,tempB_2,tempB_3;
        
    Vector polynomial;
    
    // Default is linear interpolation, other options are Catmull-Rom and Uniform Cubic B-Spline
    // Uncomment either of these to change the type:
    //type = CATMULL_ROM;
    //type = UNIFORM_CUBIC_B_SPLINE;
    switch (type)
    {
        int step, nextStep, prevStep, nextStep2;
        double diff;
        
        case LINEAR:
            step = (int)(t*count);
            nextStep = step+1;
            diff = (t*count)-step;
            
            if(nextStep >= count)
                nextStep = step;
            
            currentValue = samples[step]*(1-diff) + samples[nextStep]*diff;
            break;
        
        case CATMULL_ROM:
            step = (int)(t*count);
            nextStep = step + 1;
            nextStep2 = nextStep + 1;
            prevStep = step - 1;
            diff = (t*count) - step;
            s = (1-diff);
            
            if (nextStep >= count)
            {
                nextStep = step;
                nextStep2 = step;
            }
            else if (nextStep2 >= count)
                nextStep2 = nextStep;
            
            if (prevStep < 0)
                prevStep = step;

            
            pk = samples[step];
            pk1add = samples[nextStep];
            pk1minus = samples[prevStep];
            pk2add = samples[nextStep2];    
            
            p0 = pk;
            p1 = pk1add;
            p0prime = (pk1add - pk1minus)*(0.5);
            p1prime = (pk2add - pk)*(0.5);
            
            d = diff;
            d2 = diff*diff;
            d3 = diff*diff*diff;
            
            c0 = -s*d3 + 2*s*d2 - s*d;
            c1 = (2-s)*d3 + (s-3)*d2 + 1;
            c2 = (s-2)*d3 + (3-2*s)*d2 + s*d;
            c3 = s*d3 - s*d2;
            
            polynomial = pk1minus*c0 + pk*c1 + pk1add*c2 + pk2add*c3;
            currentValue = polynomial;
            break;
        
        case UNIFORM_CUBIC_B_SPLINE:
            step = (int)(t*count);
            nextStep = step + 1;
            nextStep2 = nextStep + 1;
            prevStep = step - 1;
            diff = (t*count) - step;
            
            if(prevStep < 0)
                prevStep = count-1;

            nextStep = nextStep % count;
            nextStep2 = nextStep2 % count;
            
            pk = samples[step];
            pk1add = samples[nextStep];
            pk1minus = samples[prevStep];
            pk2add = samples[nextStep2];    
            
            d = diff;
            d2 = diff*diff;
            d3 = diff*diff*diff;
            
            tempB_0 = (1-d)*(1-d)*(1-d)*(1.0/6.0);
            tempB_1 = (3*d3 - 6*d2 + 4)*(1.0/6.0);
            tempB_2 = (-3*d3 + 3*d2 + 3*d + 1)*(1.0 / 6.0);
            tempB_3 = d3*(1.0/6.0);
            
            polynomial = pk1minus*tempB_0 + pk*tempB_1 + pk1add*tempB_2 + pk2add*tempB_3;
            
            currentValue = polynomial;
            break;
    };
}
