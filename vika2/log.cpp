#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int numArtist, numSongs;
    string artist, songs, artistO, songsO = "";

    //fjöldi listamanna/hljómsveitar
    cin >> numArtist;

    for (int i = 0; i < numArtist; i++)
    {
        //nöfn listamanna
        cin >> artist;

         // tekur bil úr nafni listamanna
        string artistO = "";
        for (int i = 0; i < artist.length(); i++)
        {
            if (!isspace(artist[i]))
            {
                artistO += artist[i];
            }
        }
    
    cin >> numSongs;

    cout << artistO << ":" << endl;

    vector<string> songsVector;

   for (int j = 0; j < numSongs; j++)
        {
            // input lag
            cin >> songs;

            // taka bil úr laga nafni
            string songsO = "";
            for (int i = 0; i < songs.length(); i++)
            {
                if (!isspace(songs[i]))
                {
                    songsO += songs[i];
                }
            }

            songsVector.push_back(songsO);
        }

        sort(songsVector.begin(),songsVector.end());
        
        for (const auto &sortedSong : songsVector)
        {
            cout << sortedSong << endl;
        }
        
    }
            
    return 0;
}