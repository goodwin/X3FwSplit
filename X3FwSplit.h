/*
  
function prototype and sturcture define

 */


#define FILE_HEADER_SIZE 
#define SECTOR_HEADER_SIZE




int Img2File (char *InputFilePath, char *OutputFilePath) ;

int DumpFileHeader (int FileIndex) ;
int DumpSecterHeader (int SectorIndex) ;

int SplitFile () ;
