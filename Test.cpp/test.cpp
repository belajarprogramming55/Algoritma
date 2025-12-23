#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> votes;
    int totalVoters;
    
    cout << "=== SISTEM VOTING MEREK MOBIL ===" << endl;
    cout << "Masukkan jumlah pemilih: ";
    cin >> totalVoters;
    cin.ignore();
    
    for (int i = 1; i <= totalVoters; i++) {
        string brand;
        cout << "\nPemilih ke-" << i << ", pilih merek mobil: ";
        getline(cin, brand);
        votes[brand]++;
    }
    
    cout << "\n=== HASIL VOTING ===" << endl;
    for (auto& vote : votes) {
        cout << vote.first << ": " << vote.second << " suara" << endl;
    }
    
    return 0;
}