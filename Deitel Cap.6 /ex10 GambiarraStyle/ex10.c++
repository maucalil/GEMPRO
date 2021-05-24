#include <iostream>
#include <vector>

using namespace std;

int soma(vector<int> x);

int main()
{
    vector<int> K{16, -5, -11, -15, 10, 5, 4, -4};
    vector<int> sub1{K[0], K[1], K[2]};
    vector<int> sub2{K[3], K[4], K[5]};
    vector<int> sub3{K[6], K[7]};
    
    if (soma(sub1) == 0 && soma(sub2) == 0 && soma(sub3) == 0)
    {
        vector<int> sub11{K[0], 1, K[1], K[2]};
        vector<int> sub22{K[3], 1, K[4], K[5]};
        vector<int> sub33{K[6], 1, K[7]};

        int size = ((sub11.size()) + (sub22.size()) + (sub33.size()));
        vector<int> final(size);

        for (int i = 0; i < sub11.size(); i++)
        {
            final[i] = sub11[i];
        }

        for(int j = 0; j < sub22.size(); j++)
        {
            final[j+sub11.size()] = sub22[j];
        }

        for(int k = 0; k < sub22.size(); k++)
        {
            final[k+(sub11.size()+sub22.size())] = sub33[k];
        }

        for( int l = 0; l < size; l++)
        {
            cout << final[l] << " ";
        }
    }
    cout << "\n";
    return 0;

}

int soma(vector<int> x)
{
    int sum{0};
    for(int n = 0; n < x.size(); n++ )
    {
        sum += x[n];
    }
    return sum;
}