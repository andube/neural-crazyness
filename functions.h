#include <cmath>
#include <vector>
using namespace std;

float sigmoid(float x)
{
    return 1 / (1 + exp(-x));
}

float getError(float prediction, float target)
{
    return (prediction - target) * (prediction - target);
}

void update(vector<float> weights, float prediction, float target)
{
    float derivative = 2 * (prediction - target);

    weights.at(0) -= derivative;
    weights.at(1) -= derivative;
}

float generate(vector<float> inputs, vector<float> weights, float bias)
{
    float thing;
    
    for (int i = 0; i < inputs.size(); i++)
    {
        thing += inputs[i] * weights[i];
    }
    
    return sigmoid(thing + bias);
}
