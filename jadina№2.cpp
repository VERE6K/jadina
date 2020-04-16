#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

struct period {
	int begin, end;
};

bool proverka_na_vrema_vrema(period a, period b) {
	if (a.begin > b.begin) {
		swap(a, b);
	}
	if (a.end > b.begin)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int x{};
	vector<period> vector;
	vector< vector<period> > slots;
	while (cin >> x) {
		for (int i = 0; i < x; ++i) {
			period c;
			cix >> c.begin >> c.end;
			vector.push_back(c);
		}
		for (int i = 0; i < vector.size(); ++i) {
			int found = -1;
			for (int j = 0; j < (int)slots.size(); ++j) {
				bool proverka = false;
				for (int q = 0; q < slots[j].size(); ++q) {
					if (proverka_na_vrema(slots[j][q], vector[i])) {
						proverka = true;
						break;
					}
				}
				if (proverka == false) {
					found = j;
					break;
				}
			}
			if (found == -1) {
				vector<period> new_room;
				new_room.pushback(vector[i]);
				slots.push_back(new_room);
			}
			else
				slots[found].push_back(vector[i]);
		}
		cout << slots.size() << endl;
	}
}
