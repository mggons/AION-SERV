@echo off
SET NAME=SingleCore Database
TITLE %NAME%
COLOR 0A

Server\Database\bin\mysqld --defaults-file=Server\Database\my-large.ini --console --standalone
exit