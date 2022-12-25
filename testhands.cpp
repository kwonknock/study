#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
/*
	Hands	0 = high card
			1 = one pair
			2 = two pairs
			3 = triple
			4 = straight
			5 = flush
			6 = full house
			7 = four of a kind
			8 = stright flush
			9 = royal stright flush
*/
enum hands {HIGH, ONE, TWO, TRIPLE, STRAIGHT, FLUSH, FULLHOUSE, FOUR, STRAIGHTFLUSH, ROYAL};

int testHands(vector<int> _hands) {

	vector<int> num;		// only consider numbers
	vector<int> suit;		// only consider suits
	int pair = 0;			// to find pair
	int coin = 0, cnt = 0;	// to find flush, straight
	bool findStraight = false;
	bool isTriple = false;

	sort(_hands.begin(), _hands.end());

	// define num
	for (int i = 0; i < _hands.size(); i++) {
		num.push_back((_hands[i] - 1) % 13);	// 0 ~ 12
	}
	sort(num.begin(), num.end());

	// define suit
	for (int i = 0; i < _hands.size(); i++) {
		suit.push_back((_hands[i] - 1) / 13);
	}
	sort(suit.begin(), suit.end());


	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << " ";
	}
	cout << endl;

	// check flush
	for (int i = 0; i < suit.size() - 1; i++)
	{
		if (coin > 2) {	// 2코
			break;
		}
		if (suit[i] != suit[i + 1]) {
			coin++;
			cnt = 0;
			continue;
		}
		cnt++;

		if (cnt == 4)	// find flush
		{
			int ace = (suit[i] * 13 + 1);	// find suit by ACE	
			for (int j = 0; j < 3; j++)		// last 5 card
			{
				// check royal straight flush
				if (_hands[j] == ace)	// find flush ACE card
				{
					int cntRoyal = 0;
					for (int k = j + 1; k < _hands.size(); k++) {	// find TJQK
						if ((_hands[k] >= ace + 9) && (_hands[k] < ace + 13)) {
							cntRoyal++;
						}
					}
					if (cntRoyal == 4) {
						return ROYAL;
					}
				}
				// check straight flush
				if (_hands[j] >= ace || _hands[j] < (ace + 9)) {	// catch flush start point
					int cntSF = 0;
					for (int k = j; k < _hands.size() - 1; k++) {
						if (_hands[j] + 1 == _hands[j + 1]) {
							cntSF++;
						}
						else {
							cntSF = 0;
						}
						if (cntSF == 4) {
							return STRAIGHTFLUSH;
						}
					}
					return FLUSH;	// 플러시면 반드시 이 조건문을 지남
				}
			}
			//return FLUSH;
		}
	}

	// check stright
	coin = 0;	// reset
	cnt = 0;

	findStraight = count_if(num.begin(), num.end(),
		[](int e) { return (e == 4) || (e == 9); });	// find 5 or 10

	if (findStraight)
	{
		for (int j = 0; j < num.size() - 1; j++)
		{
			if (coin > 2) {	// 2코
				break;
			}

			if (num[j] == num[j + 1]) {	// 1. same number
				continue;
			}
			else if ((num[j] + 1) != num[j + 1]) {	// 2. non-straight
				if (num[0] == 0 && num[j + 1] == 9) {	// consider TJQKA
					cnt++;
				}
				else {
					coin++;
					cnt = 0;
				}
			}
			else {	// 3. still straight
				cnt++;
			}
		}
		
		if (cnt >= 4) {
			return STRAIGHT;
		}
	}
	//=========================================================================
	// check pairs
	for (int i = 0; i < num.size() - 1; i++)
	{
		if (num[i] == num[i + 1]) {			// pair
			if (i < 5) {	// last 3 card
				if (num[i] == num[i + 2]) {		// triple
					if (i < 4) {	// last 4 card 
						if (num[i] == num[i + 3]) {	// four of a kind
							return FOUR;
						}
					}
					isTriple = true;
					pair--;
					i++;
				}
			}
			pair++;
		}
	}
	if (isTriple) {
		if (pair == 1) {	// full house
			return FULLHOUSE;
		}
		return TRIPLE;
	}
	else if (pair == 2) {	// two pairs
		return TWO;
	}
	else if (pair == 1) {	// one pair
		return ONE;
	}
	return HIGH;
}

void printHands(int _status)
{
	switch (_status) {
	case ONE:
		cout << "one pair" << endl;
		break;
	case TWO:
		cout << "two pairs" << endl;
		break;
	case TRIPLE:
		cout << "triple" << endl;
		break;
	case STRAIGHT:
		cout << "stright" << endl;
		break;
	case FLUSH:
		cout << "flush" << endl;
		break;
	case FULLHOUSE:
		cout << "full house" << endl;
		break;
	case FOUR:
		cout << "four of a kind" << endl;
		break;
	case STRAIGHTFLUSH:
		cout << "stright flush" << endl;
		break;
	case ROYAL:
		cout << "royal stright flush" << endl;
		break;
	default:
		cout << "fuck!" << endl;
		break;
	}
}

int main()
{
	vector<int> t;
	t.push_back(17);	
	t.push_back(4);	
	t.push_back(10);
	t.push_back(43);
	t.push_back(14);	
	t.push_back(30);
	t.push_back(23);

	printHands(testHands(t));

	return 0;
}