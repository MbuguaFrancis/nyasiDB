#ifndef NYASIDB_H
#define NYASIDB_H

#include <string>
#include "database.h"

class NyasiDb
{
public:
    NyasiDb();

    static Database createEmptyDB(std::string& dbname);
};

#endif // NYASIDB_H
