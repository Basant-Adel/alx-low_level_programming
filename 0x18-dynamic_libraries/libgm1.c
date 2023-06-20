int rand() {
    int seeds[] = { 8, 8, 7, 9, 23, 74 };
    static int i = 0;
    return seeds[i++];
}
