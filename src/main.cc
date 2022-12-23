#include <clap/clap.h>

// The purpose of this file is to check that all headers compile

#if CLAP_VERSION_LT(CLAP_VERSION_MAJOR, CLAP_VERSION_MINOR, CLAP_VERSION_REVISION)
SOFTWARE ERROR: CLAP_VERSION_LT is inconsistent
#endif

#if !CLAP_VERSION_EQ(CLAP_VERSION_MAJOR, CLAP_VERSION_MINOR, CLAP_VERSION_REVISION)
SOFTWARE ERROR: CLAP_VERSION_EQ is inconsistent
#endif

#if !CLAP_VERSION_GE(CLAP_VERSION_MAJOR, CLAP_VERSION_MINOR, CLAP_VERSION_REVISION)
SOFTWARE ERROR: CLAP_VERSION_GE is inconsistent
#endif

#if CLAP_VERSION_LT(1,1,5)
SOFTWARE ERROR: CLAP_VERSION_GE was inroduced in 1.1.5 so we should be later than that version.
#endif

static const CLAP_CONSTEXPR clap_version m = CLAP_VERSION;

int main(int, char **) {
   return !clap_version_is_compatible(m);
}
