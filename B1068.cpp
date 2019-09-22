#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<vector<int>> pic;
	int M,N,TOL;
	cin >> M;
	cin >> N;
	cin >> TOL;

	for (int i=0; i<N; i++)
		{
			vector<int> row;
			pic.push_back(row);
			for (int j=0; j<M; j++)
				{
					int value;
					cin >> value;
					pic[i].push_back(value);
				}
		}
	int count = 0;
	int ansX = 0;
	int ansY = 0;
	for (int i=0; i<M; i++)
		for (int j=0; j<N; j++)
			{
				bool flag=true;
				for (int x=-1; x<=1; x++)
					{
						for (int y=-1; y<=1; y++)
							{
								try
									{
										if ( x==0 && y==0)  continue;
										int d = abs(pic.at(x+i).at(y+j)-pic.at(i).at(j));
										if (d<TOL)
											{
												flag=false;
												break;
											}
									}
								catch (const exception& e)
									{
									}
							}
						if (!flag) break;
					}
				if (flag)
					{
						count++;
						ansX=i;
						ansY=j;
						cout << i << " " << j << " " << pic[i][j] << endl;
					}
			}

	if (count==0)
		{
			cout << "Not Exist" <<endl;
		}
	else if(count==1)
		{
			cout << "(" << ansX << "," << ansY << "): " << pic[ansX][ansY] <<endl;
		}
	else
		{
			cout << "Not Unique" <<endl;
			cout << count <<endl;
		}

	return 0;
}
