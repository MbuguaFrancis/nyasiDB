#include "nyasidb.h"

NyasiDb::NyasiDb()
{
}

Database NyasiDb::createEmptyDB(std::string &dbname){
    return Database::createEmpty(dbname);
}
