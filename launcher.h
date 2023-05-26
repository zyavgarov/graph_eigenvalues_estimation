//
// Created by Galileo on 27/05/2023.
//

#ifndef ESTIMATIONBRUTEFORCE_LAUNCHER_H
#define ESTIMATIONBRUTEFORCE_LAUNCHER_H

#include "Cell.h"

vector<long double> randomVectorWithSumOne(int size);

vector<long double> Mv(vector<long double> v, vector<vector<long double>> M, int N);

long double sc(const std::vector<long double> &v1, const std::vector<long double> &v2);

vector<double> launch_estimation(int first_num, int last_num, double R_denominator,
                                 long double (*metric)(pair<long double, long double>, pair<long double, long double>),
                                 const string &filename = "", bool print_progress = false);

#endif //ESTIMATIONBRUTEFORCE_LAUNCHER_H
