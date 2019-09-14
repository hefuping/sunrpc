program DATE_PROG
{
    version DATE_VER
    {
        long BIN_TIME(void) = 1;
	string STR_TIME(long) = 2;
    } = 1;
} = 0x20000001;
