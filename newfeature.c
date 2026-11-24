int main() {
    // need to print current working dir.
    char pwd[1024];
    getcwd(pwd, sizeof(pwd));
    printf("%s\n", pwd);
    return 0;
}
