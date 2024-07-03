//#include <bits/stdc++.h>

#include <iostream>
#include <vector>
#include <string>
//#include <math.h>
#include <cmath>
#include <istream>
#include <fstream>
//#include <memory>
#include <algorithm>
//using namespace std;


std::string ltrim(const std::string &);
std::string rtrim(const std::string &);
std::vector<std::string> split(const std::string &);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */
int diagonalDifference(std::vector<std::vector<int>> &arr)
{
    int sum=0 ;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(i==j)
            {
                sum1=sum1+arr[i][j];

            }
        }
    }
        for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
           // sum2= arr[2][0]+arr[1][1]+arr[0][2];
            if(i+j==arr.size()-1)
            {
                sum2=sum2+arr[i][j];

            }
        }
    }
//sum=std::abs(sum1-sum2);
// cout<<sum<<endl;
//return sum;
return std::abs(sum1-sum2);
}

int main()
{
    std::ofstream fout(getenv("OUTPUT_PATH"));

    std::string n_temp;
    std::getline(std::cin, n_temp);

    //int n = std::stoi(ltrim(rtrim(n_temp)));
    int n = 0;
try 
{
    n = std::stoi(ltrim(rtrim(n_temp)));
} catch (const std::invalid_argument& ia) 
{
    std::cerr << "Invalid argument: unable to convert string to integer" << std::endl;
    return 1; // or some other error handling
} catch (const std::out_of_range& oor) 
{
    std::cerr << "Out of range: integer value is too large" << std::endl;
    return 1; // or some other error handling
}
    std::vector<std::vector<int>> arr(n);

    for (int i = 0; i < n; i++) 
    {
        arr[i].resize(n);

        std::string arr_row_temp_temp;
        std::getline(std::cin, arr_row_temp_temp);

        std::vector<std::string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < n; j++) 
        {
       //     int arr_row_item = std::stoi(arr_row_temp[j]);
             int arr_row_item=0;
             try 
             {
        arr_row_item = std::stoi(arr_row_temp[j]);
    } catch (const std::invalid_argument& ia) 
    {
        std::cerr << "Invalid argument: unable to convert string to integer" << std::endl;
        return 1; // or some other error handling
    } catch (const std::out_of_range& oor) 
    {
        std::cerr << "Out of range: integer value is too large" << std::endl;
        return 1; // or some other error handling

            arr[i][j] = arr_row_item;
        }
    }
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}



std::string ltrim(const std::string &str) 
{
    std::string s(str);

    s.erase(
        s.begin(),
        //find_if(s.begin(), s.end(),  std::not1(ptr_fun<int, int>(isspace)))
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) { return !std::isspace(ch); }))
    );

    return s;
}

std::string rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        //find_if(s.rbegin(), s.rend(), std::not1(ptr_fun<int, int>(isspace))).base(),
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) { return !std::isspace(ch); })),
        s.end()
    );

    return s;
}

std::vector<std::string> split(const std::string &str) {
    std::vector<std::string> tokens;

    std::string::size_type start = 0;
    std::string::size_type end = 0;

    while ((end = str.find(" ", start)) != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
