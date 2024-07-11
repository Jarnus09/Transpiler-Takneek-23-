#include <bits/stdc++.h>
using namespace std;

int cond = 0;
string current_position = "start";
stack<int> loop_history;
ofstream outfile;

void initialize() {
    outfile << current_position << ", " << cond << ", "
            << "pronite_2\n";

    outfile << "pronite_2"
            << ", " << cond << ", "
            << "mt_3_2\n";

    current_position = "mt_3_2";
}

bool isNum(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (!isdigit(s[i])) {
            return false;
        }
    }
    return true;
}

void takeInput(int p) {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", ";

    if (p == 1) {
        outfile << "iit_gate_in_1\n";
        current_position = "iit_gate_in_1";
    } else if (p == 2) {
        outfile << "iit_gate_in_2\n";
        current_position = "iit_gate_in_2";
    }
}

void addFinishLocation() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "finish\n";
    current_position = "finish";
}

void output(int p) {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", ";

    if (p == 1) {
        outfile << "iit_gate_out_1\n";
        current_position = "iit_gate_out_1";
    } else if (p == 2) {
        outfile << "iit_gate_out_2\n";
        current_position = "iit_gate_out_2";
    }
}

void updatePositionsBeforeInsert() {
    // p2 is made empty for input.EOS is at p3.
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << ", " << cond << ", "
            << "hall_13_2\n";

    current_position = "hall_13_2 ";
}

void pop() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "mt_2_3\n";

    outfile << "mt_2_3"
            << ", " << cond << ", "
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "kd_3\n";

    current_position = "kd_3";
}

void arithmetic(string hall) {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", " << hall << "\n";

    outfile << hall << ", " << cond << ", "
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << ", " << cond << ", "
            << "pronite_2\n";

    outfile << "pronite_2"
            << ", " << cond << ", "
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "kd_3\n";

    current_position = "kd_3";
}

void modulo() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "hall_12\n";

    outfile << "hall_12"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "hall_3\n";

    outfile << "hall_3"
            << ", " << cond << ", "
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << ", " << cond << ", "
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ", "
            << "hall_13_2\n";

    outfile << "hall_13_2"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "kd_3\n";

    current_position = "kd_3";
    arithmetic("hall_5");
}

void swap() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "mt_3_1\n";

    outfile << "mt_3_1"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << ", " << cond << ", "
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << ", " << cond << ", "
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ", "
            << "kd_3\n";

    outfile << "kd_3"
            << ", " << cond << ", "
            << "mt_2_3\n";

    outfile << "mt_2_3"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "pronite_2\n";

    outfile << "pronite_2"
            << ", " << cond << ", "
            << "kd_2\n";

    current_position = "kd_2";
}

void cycle() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "events_1\n";

    outfile << "events_1_f"
            << ", " << cond << ", "
            << "mt_3_1\n";

    outfile << "mt_3_1"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << ", " << cond << ", "
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << ", " << cond << ", "
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ", "
            << "kd_3\n";

    outfile << "kd_3"
            << ", " << cond << ", "
            << "mt_2_3\n";

    outfile << "mt_2_3"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "events_1\n";

    outfile << "events_1_t"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "events_2\n";

    outfile << "events_2_f"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "events_2_t"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ", "
            << "kd_3\n";

    current_position = "kd_3";
}

void reverse() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "kd_3\n";

    outfile << "kd_3"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "events_1\n";

    outfile << "events_1_f"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "events_1_t"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "events_1\n";

    outfile << "events_1_f"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "events_1_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "mt_3_1\n";

    outfile << "mt_3_1"
            << "," << cond << ","
            << "mt_2_3\n";

    outfile << "mt_2_3"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "kd_2\n";

    outfile << "kd_2"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "oat_stage\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << "," << cond << ","
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "oat_stage\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "hall_13_2\n";

    outfile << "hall_13_2"
            << "," << cond << ","
            << "kd_2\n";

    outfile << "kd_2"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "pronite_1\n";

    outfile << "pronite_1"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "kd_2\n";

    outfile << "kd_2"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "kd_1\n";

    current_position = "kd_1";
}

void duplicate() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "pronite_2\n";

    outfile << "pronite_2"
            << ", " << cond << ", "
            << "kd_2\n";

    current_position = "kd_2";
}

void outputAscii() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "nankari_gate_out_2\n";

    current_position = "nankari_gate_out_2";
}

void debug() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "kd_2\n";

    outfile << "kd_2"
            << "," << cond << ","
            << "events_1\n";

    outfile << "events_1_f"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "events_1_t"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "iit_gate_out_2\n";

    outfile << "iit_gate_out_2"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "kd_2\n";

    outfile << "kd_2"
            << "," << cond << ","
            << "kd_1\n";

    current_position = "kd_1";
}

void push(int n) {
    updatePositionsBeforeInsert();
    while (n--) {
        outfile << current_position << ", " << cond << ", "
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << ", " << cond << ", "
                << "oat_stairs_2\n";

        current_position = "oat_stairs_2";
    }
}

void pushOptimized(int n) {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    vector<int> v;
    while (n) {
        v.push_back(n % 2);
        n /= 2;
    }
    int size = v.size();

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "hall_13_2\n";

    outfile << "hall_13_2"
            << ", " << cond << ", "
            << "oat_stairs_2\n";

    outfile << "oat_stairs_2"
            << ", " << cond << ", "
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "oat_stairs_2\n";

    current_position = "oat_stairs_2";

    for (int i = 0; i < size - 2; i++) {
        outfile << current_position << ", " << cond << ", "
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << ", " << cond << ", "
                << "rm_3\n";

        outfile << "rm_3"
                << ", " << cond << ", "
                << "hall_3\n";

        outfile << "hall_3"
                << ", " << cond << ", "
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    outfile << current_position << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "hall_13_3\n";

    current_position = "hall_13_3";

    for (int i : v) {
        if (i == 1) {
            outfile << current_position << ", " << cond << ", "
                    << "mt_1_3\n";

            outfile << "mt_1_3"
                    << ", " << cond << ", "
                    << "hall_2\n";

            current_position = "hall_2";
        }
        outfile << current_position << ", " << cond << ", "
                << "rm_2\n";

        outfile << "rm_2"
                << ", " << cond << ", "
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    outfile << current_position << ", " << cond << ", "
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < size; i++) {
        outfile << current_position << ", " << cond << ", "
                << "hall_13_3\n";

        outfile << "hall_13_3"
                << ", " << cond << ", "
                << "kd_2\n";

        outfile << "kd_2"
                << ", " << cond << ", "
                << "kd_3\n";

        outfile << "kd_3"
                << ", " << cond << ", "
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    outfile << current_position << ", " << cond << ", "
            << "pronite_2\n";

    outfile << "pronite_2"
            << ", " << cond << ", "
            << "kd_2\n";

    current_position = "kd_2";
}

void rcycle() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "events_1\n";

    outfile << "events_1_f"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "events_1\n";

    outfile << "events_1_t"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "events_2\n";

    outfile << "events_2_f"
            << ", " << cond << ", "
            << "mt_3_1\n";

    outfile << "mt_3_1"
            << ", " << cond << ", "
            << "rm_3\n";

    outfile << "rm_3"
            << ", " << cond << ", "
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << ", " << cond << ", "
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << ", " << cond << ", "
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ", "
            << "kd_3\n";

    outfile << "kd_3"
            << ", " << cond << ", "
            << "mt_2_3\n";

    outfile << "mt_2_3"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "events_2\n";

    outfile << "events_2_t"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ", "
            << "kd_3\n";

    current_position = "kd_3";
}

void beginLoop() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;
    loop_history.push(cond);

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "hall_13_2\n";

    outfile << "hall_13_2"
            << ", " << cond << ", "
            << "lecture_hall_eq\n";

    outfile << "lecture_hall_eq_f"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "kd_2\n";

    outfile << "kd_2"
            << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "kd_2\n";

    current_position = "kd_2";
}

void endLoop() {
    int a = loop_history.top() - cond;
    loop_history.pop();
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[" << a << "]\n";
    cond += a;

    cond++;
    outfile << "lecture_hall_eq_t"
            << ", " << cond << ", "
            << "oat_stage[" << -a + 1 << "]\n";

    cond -= (a - 1);
    current_position = "oat_stage";
}

void inputAscii() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "airstrip_land_2\n";

    outfile << "airstrip_land_2"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "events_2_t"
            << "," << cond
            << ","
            //             << "kd_2\n";

            //     outfile << "kd_2"
            //             << "," << cond << ","
            //             << "kd_3\n";

            //     outfile << "kd_3"
            //             << "," << cond << ","
            //             << "mt_2_3\n";

            //     outfile << "mt_2_3"
            //             << "," << cond << ","
            //             << "hall_13_3\n";

            //     outfile << "hall_13_3"
            //             << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "events_1\n";

    outfile << "events_1_f"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "events_1_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "mt_3_1\n";

    outfile << "mt_3_1"
            << "," << cond << ","
            << "mt_2_3\n";

    outfile << "mt_2_3"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "kd_2\n";

    outfile << "kd_2"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "kd_2\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "mt_3_2\n";

    outfile << "mt_3_2"
            << "," << cond << ","
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_f"
            << "," << cond << ","
            << "hall_13_2\n";

    outfile << "hall_13_2"
            << "," << cond << ","
            << "kd_2\n";

    outfile << "kd_2"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "events_2\n";

    outfile << "events_2_t"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "kd_2\n";

    outfile << "kd_2"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "kd_1\n";

    current_position = "kd_1";
}

void bitwiseAnd() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    // converting n1 to binary.
    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "oat_stairs_2\n";

    outfile << "oat_stairs_2"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "oat_stairs_2\n";

    current_position = "oat_stairs_2";

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "hall_5\n";

        outfile << "hall_5"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    // converting n2 to binary.
    outfile << current_position << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "hall_5\n";

        outfile << "hall_5"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    // taking and of n1,n2 and storing it by overwriting n1.
    outfile << current_position << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    current_position = "rm_1";

    for (int i = 0; i < 33; i++) {
        outfile << current_position << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    // making array of powers of 2
    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "hall_13_2\n";

    outfile << "hall_13_2"
            << "," << cond << ","
            << "oat_stairs_2\n";
    current_position = "oat_stairs_2";

    for (int i = 0; i < 31; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "mt_2_3\n";

        outfile << "mt_2_3"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }

    // converting bin to dec.
    for (int i = 0; i < 31; i++) {
        outfile << current_position << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << ", " << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ","
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ","
            << "oat_stage[1]\n";

    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "kd_3\n";

        outfile << "kd_3"
                << "," << cond << ","
                << "mt_2_3\n";

        outfile << "mt_2_3"
                << "," << cond << ","
                << "hall_2\n";

        outfile << "hall_2"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }

    // bring back pointers.
    for (int i = 0; i < 36; i++) {
        outfile << current_position << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << "," << cond << ","
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < 67; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_13_3\n";

        outfile << "hall_13_3"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "kd_3\n";

        outfile << "kd_3"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << "," << cond << ","
            << "pronite_2\n";

    outfile << "pronite_2"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "kd_2\n";

    current_position = "kd_2";
}

void bitwiseXor() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    // converting n1 to binary.
    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "oat_stairs_2\n";

    outfile << "oat_stairs_2"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "oat_stairs_2\n";

    current_position = "oat_stairs_2";

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "hall_5\n";

        outfile << "hall_5"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    // converting n2 to binary.
    outfile << current_position << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "hall_5\n";

        outfile << "hall_5"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    // taking xor of n1,n2 and storing it by overwriting n1.
    outfile << current_position << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    current_position = "rm_1";

    for (int i = 0; i < 33; i++) {
        outfile << current_position << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "lecture_hall_eq\n";

        outfile << "lecture_hall_eq_t"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "hall_13_1\n";

        outfile << "hall_13_1"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        cond -= 2;
        outfile << "lecture_hall_eq_f"
                << "," << cond << ","
                << "hall_13_1\n";

        outfile << "hall_13_1"
                << "," << cond << ","
                << "oat_stairs_1\n";

        outfile << "oat_stairs_1"
                << "," << cond << ","
                << "oat_stage[2]\n";
        cond += 2;

        outfile << "oat_stage"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    // making array of powers of 2
    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "hall_13_2\n";

    outfile << "hall_13_2"
            << "," << cond << ","
            << "oat_stairs_2\n";
    current_position = "oat_stairs_2";

    for (int i = 0; i < 31; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "mt_2_3\n";

        outfile << "mt_2_3"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }

    // converting bin to dec.
    for (int i = 0; i < 31; i++) {
        outfile << current_position << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << ", " << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ","
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ","
            << "oat_stage[1]\n";

    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "kd_3\n";

        outfile << "kd_3"
                << "," << cond << ","
                << "mt_2_3\n";

        outfile << "mt_2_3"
                << "," << cond << ","
                << "hall_2\n";

        outfile << "hall_2"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }

    // bring back pointers.
    for (int i = 0; i < 36; i++) {
        outfile << current_position << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << "," << cond << ","
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < 67; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_13_3\n";

        outfile << "hall_13_3"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "kd_3\n";

        outfile << "kd_3"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << "," << cond << ","
            << "pronite_2\n";

    outfile << "pronite_2"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "kd_2\n";

    current_position = "kd_2";
}

void bitwiseOr() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    // converting n1 to binary.
    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_2\n";

    outfile << "rm_2"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "oat_stairs_2\n";

    outfile << "oat_stairs_2"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "oat_stairs_2\n";

    current_position = "oat_stairs_2";

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "hall_5\n";

        outfile << "hall_5"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    // converting n2 to binary.
    outfile << current_position << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "hall_5\n";

        outfile << "hall_5"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_12\n";

        outfile << "hall_12"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    // taking and of n1,n2 and storing it by overwriting n1.
    outfile << current_position << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << "," << cond << ","
            << "rm_1\n";

    current_position = "rm_1";

    for (int i = 0; i < 33; i++) {
        outfile << current_position << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_2\n";

        outfile << "hall_2"
                << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "mt_2_3\n";

        outfile << "mt_2_3"
                << "," << cond << ","
                << "hall_13_3\n";

        outfile << "hall_13_3"
                << "," << cond << ","
                << "kd_3\n";

        outfile << "kd_3"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "hall_5\n";

        outfile << "hall_5"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        outfile << "oat_stage"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "oat_stage[1]\n";
        cond++;

        current_position = "oat_stage";
    }

    // making array of powers of 2
    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "hall_13_2\n";

    outfile << "hall_13_2"
            << "," << cond << ","
            << "oat_stairs_2\n";
    current_position = "oat_stairs_2";

    for (int i = 0; i < 31; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "mt_2_3\n";

        outfile << "mt_2_3"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }

    // converting bin to dec.
    for (int i = 0; i < 31; i++) {
        outfile << current_position << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << ", " << cond << ","
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ","
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << ", " << cond << ","
            << "oat_stage[1]\n";

    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < 32; i++) {
        outfile << current_position << "," << cond << ","
                << "rm_3\n";

        outfile << "rm_3"
                << "," << cond << ","
                << "hall_3\n";

        outfile << "hall_3"
                << "," << cond << ","
                << "mt_1_3\n";

        outfile << "mt_1_3"
                << "," << cond << ","
                << "kd_3\n";

        outfile << "kd_3"
                << "," << cond << ","
                << "mt_2_3\n";

        outfile << "mt_2_3"
                << "," << cond << ","
                << "hall_2\n";

        outfile << "hall_2"
                << "," << cond << ","
                << "rm_1\n";

        outfile << "rm_1"
                << "," << cond << ","
                << "rm_2\n";

        outfile << "rm_2"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }

    // bring back pointers.
    for (int i = 0; i < 36; i++) {
        outfile << current_position << "," << cond << ","
                << "kd_1\n";

        outfile << "kd_1"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << "," << cond << ","
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << "," << cond << ","
            << "rm_3\n";

    outfile << "rm_3"
            << "," << cond << ","
            << "hall_13_3\n";

    outfile << "hall_13_3"
            << "," << cond << ","
            << "kd_3\n";

    outfile << "kd_3"
            << "," << cond << ","
            << "oat_stage[1]\n";
    cond++;

    current_position = "oat_stage";

    for (int i = 0; i < 67; i++) {
        outfile << current_position << "," << cond << ","
                << "hall_13_3\n";

        outfile << "hall_13_3"
                << "," << cond << ","
                << "kd_2\n";

        outfile << "kd_2"
                << "," << cond << ","
                << "kd_3\n";

        outfile << "kd_3"
                << "," << cond << ","
                << "oat_stage[1]\n";

        cond++;

        current_position = "oat_stage";
    }
    outfile << current_position << "," << cond << ","
            << "pronite_2\n";

    outfile << "pronite_2"
            << "," << cond << ","
            << "kd_1\n";

    outfile << "kd_1"
            << "," << cond << ","
            << "kd_2\n";

    current_position = "kd_2";
}

void bitwiseNot() {
    outfile << current_position << ", " << cond << ", "
            << "oat_stage[1]\n";
    cond++;

    outfile << "oat_stage"
            << ", " << cond << ", "
            << "rm_1\n";

    outfile << "rm_1"
            << ", " << cond << ", "
            << "rm_2\n";

    outfile << "rm_2"
            << ", " << cond << ", "
            << "hall_13_2\n";

    outfile << "hall_13_2"
            << ", " << cond << ", "
            << "southern_labs_2\n";

    outfile << "southern_labs_2"
            << ", " << cond << ", "
            << "hall_3\n";

    outfile << "hall_3"
            << ", " << cond << ", "
            << "mt_1_3\n";

    outfile << "mt_1_3"
            << ", " << cond << ", "
            << "southern_labs_1\n";

    outfile << "southern_labs_1"
            << ", " << cond << ", "
            << "kd_1\n";

    outfile << "kd_1"
            << ", " << cond << ", "
            << "pronite_2\n";

    outfile << "pronite_2"
            << ", " << cond << ", "
            << "kd_2\n";

    current_position = "kd_2";
}

int main(int argc, char** argv) {
    outfile.open("output.iitkv", ios::out | ios::trunc);
    string path = argv[1];

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ifstream inpfile(path);

    string s;
    vector<string> token;

    while (inpfile >> s) {
        token.push_back(s);
    }
    initialize();
    for (string a : token) {
        if (a == "input") {
            updatePositionsBeforeInsert();
            takeInput(2);
        }
        if (a == "output") {
            output(2);
            pop();
        }
        if (a == "pop") {
            pop();
        }
        if (a == "add") {
            arithmetic("hall_2");
        }
        if (a == "sub") {
            arithmetic("hall_5");
        }
        if (a == "mul") {
            arithmetic("hall_3");
        }
        if (a == "div") {
            arithmetic("hall_12");
        }
        if (a == "mod") {
            modulo();
        }

        if (a == "swap") {
            swap();
        }
        if (a == "cycle") {
            cycle();
        }
        if (a == "rev") {
            reverse();
        }
        if (a == "dup") {
            duplicate();
        }
        if (a == "outputascii") {
            outputAscii();
            pop();
        }
        if (a == "debug") {
            debug();
        }
        if (a == "rcycle") {
            rcycle();
        }
        if (isNum(a)) {
            int n = stoi(a);
            if (n <= 36) {
                push(n);
            } else {
                pushOptimized(n);
            }
        }
        if (a == "quit") {
            addFinishLocation();
        }
        if (a == "if") {
            beginLoop();
        }
        if (a == "fi") {
            endLoop();
        }
        if (a == "inputascii") {
            updatePositionsBeforeInsert();
            outfile << current_position << ", " << cond << ", "
                    << "hall_13_3\n";

            current_position = "hall_13_3";
            inputAscii();
        }
        if (a == "and") {
            bitwiseAnd();
        }
        if (a == "xor") {
            bitwiseXor();
        }
        if (a == "or") {
            bitwiseOr();
        }
        if (a == "not") {
            bitwiseNot();
        }
        if (a == "nand") {
            bitwiseAnd();
            bitwiseNot();
        }
        if (a == "nor") {
            bitwiseOr();
            bitwiseNot();
        }
    }
    addFinishLocation();
}