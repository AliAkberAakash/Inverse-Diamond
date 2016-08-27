#include<iostream>

bool checkfor2(int i,int j)
{
    bool status=false;

    if(rooklogic(block_rect[7][0].x, block_rect[7][0].y,i,j)||rooklogic(block_rect[7][7].x, block_rect[7][7].y,i,j))
        {
            status=true;
            cout<<"me1"<<endl;
        }
    else if(knightlogic(block_rect[7][1].x, block_rect[7][1].y,i,j)||knightlogic(block_rect[7][6].x, block_rect[7][6].y,i,j))
        {
            status=true;
            cout<<"me2"<<endl;
        }
//    else if(kinglogic1(block_rect[7][4].x, block_rect[7][4].y,i,j))
//        status=true;
    else if(queenlogic(block_rect[7][3].x, block_rect[7][3].y,i,j))
        {
            status=true;
            cout<<"me3"<<endl;
        }
    else if(bishoplogic(block_rect[7][2].x, block_rect[7][2].y,i,j)||bishoplogic(block_rect[7][5].x, block_rect[7][5].y,i,j))
        {
            status=true;
            cout<<"me4"<<endl;
        }
//    else
//    {
    for(int m=0; m<8; m++)
    {
        if(w_pawnlogic(block_rect[6][m].x, block_rect[6][m].y,i,j))
        {
            status=true;
            cout<<"me"<<5+m<<endl;
        }

        else if((block_rect[6][m].x-i==80&&block_rect[6][m].y-j==80)||(i-block_rect[6][m].x==80&&block_rect[6][m].y-j==80))
        return true;
    }

    return status;
}


int main()
{
    int i,j;

    using namespace std;

    cin>>i>>j>>endl;

    if(checkfor2(560,320))
    {
        cout<<i<<" "<<j<<endl:
    }


}
