#include <iostream>
#include <vector>

using namespace std;

void dfs_match(int , int );
void check_perfect_match();
vector<vector<int>> adjacency_list;
vector<int> perfect_match;

int main()
{
    int max_node, max_edge;
    int start_vertex, end_vertex;
    vector<int> node_list;
    while (1)
    {
        cin >> max_node;
        cin >> max_edge;
        adjacency_list.assign(max_node, node_list);
        perfect_match.assign(max_node, 0);

        //  use push_back as little as possible
        for( int i=0; i < max_edge; i ++ )
        {
            cin >> start_vertex;
            cin >> end_vertex;
            adjacency_list[start_vertex-1].push_back(end_vertex);
        }
            // suppose 1 is root
        dfs_match(0, 1);
        check_perfect_match();
    }

    return 0;
}
void dfs_match(int parent, int child)
{
    vector<int>::iterator ptr;

    for (ptr=adjacency_list[child-1].begin(); ptr < adjacency_list[child-1].end(); ptr++)
    {
        dfs_match(child, *ptr);
    }
    // root
    if ((parent-1)!=-1)
    {
         if(perfect_match[parent-1]==0 && perfect_match[child-1]==0)
         {
             perfect_match[parent-1]=child;
             perfect_match[child-1]=parent;
         }
    }
}

void check_perfect_match()
{
    int index = 1;
    int check = true;

    cout<<"matching pairs:";

    for (int match:perfect_match)
    {
        if(match==0)
        {
            check = false;
        }
        cout<<"("<<index<<","<< match<<") ";
        index++;
    }
    if(check)
    {
        cout<<"\nExist perfect matching\n\n";
    }
    else
    {
        cout<<"\nDoesn't exist perfect matching\n\n";
    }
}
