TEMPLATE = subdirs

SUBDIRS += \
    nyasi-db \
    nyasi-db-cli \
    nyasi-db-tests

nyasi-db-tests.depends = nyasi-db
nyasi-db-cli.depends = nyasi-db

CONFIG += console c++17
CONFIG += app_bundle
CONFIG += qt

SOURCES +=

HEADERS +=
