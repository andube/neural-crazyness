#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;

int main()
{
    vector<float> inputs = {2, 1.5};
    vector<float> weights = {1.45, -0.66};
    
    
    float prediction = generate(inputs, weights, 0.0);
    float error = getError(prediction, 0);
    cout << "Prediction: " << prediction << "\nError: " << error;
    
    update(weights, prediction, 0);
    prediction = generate(inputs, weights, 0);
    cout << "\n\nNew Prediction: " << prediction;
    
    return 0;
}
