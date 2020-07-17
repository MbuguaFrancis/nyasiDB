#include "database.h"

Database::Database(std::string dbname, std::string fullpath)
{

}

Database Database::createEmpty(std::string dbname){
    return Database("Fred", "Flinstone");
}
