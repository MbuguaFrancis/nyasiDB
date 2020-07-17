#include "tests.h"
#include <filesystem>
#include <string>

#include "nyasidb.h"

namespace fs = std::filesystem;

TEST_CASE("Create a new empty database","[CreateEmptyDB]"){
    // Story:-
    // [Who] As a database administrator
    // [What] I need to create a new empty database
    // [Value] So I can later store and retrieve data

    SECTION("DEFAULT SETTINGS"){
        std::string dbname("emptydatabase");
        Database db(NyasiDb::createEmptyDB(dbname));
        // We know we have been successful when:-
        // 1. We have a valid database reference returned
        // - No Test -> The above would have errored
        // 2. The DB has a folder that exists on the filesystem

        REQUIRE(fs::is_directory(fs::status(db.getDirectory())));

        // 3. The database folder is empty (no database files yet
        const auto& p = fs::directory_iterator(db.getDirectory());

        REQUIRE(p == end(p));
    }
}
