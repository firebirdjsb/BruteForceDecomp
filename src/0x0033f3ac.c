/* Brute Force original Xbox x86: FUN_0033f3ac
 * Entry: 0x0033f3ac, original body SHA-256:
 * B6FE405D734D63457C3F7BD678E66D1D70E1C8D44ED631F67EFA20A5D761DA69
 * READABLE ROLE (supported): forward a 64-bit system-time value to NtSetSystemTime.
 * Evidence: XONLINE machine code at 0x0033f3ac-0x0033f3bb, kernel import
 * thunk 0x003864bc = ordinal 228 (NtSetSystemTime), and ret 8.
 * Status: C11 syntax-checked; Xbox linker and runtime semantics untested.
 */
#include <stdint.h>
#include <stddef.h>

#if defined(_MSC_VER) && defined(_M_IX86)
# define BF_XBOX_STDCALL __stdcall
#elif defined(__GNUC__) && defined(__i386__)
# define BF_XBOX_STDCALL __attribute__((stdcall))
#else
# define BF_XBOX_STDCALL /* Host analysis builds only; original is x86 stdcall. */
#endif

/* Xbox kernel declaration: NTSTATUS NtSetSystemTime(PLARGE_INTEGER, PLARGE_INTEGER).
 * int64_t is the 8-byte QuadPart storage; detailed XDK ABI/linking is pending. */
typedef int32_t BF_NTSTATUS;
extern BF_NTSTATUS BF_XBOX_STDCALL NtSetSystemTime(
    const int64_t *system_time,
    int64_t *previous_time);

/* The original ABI consumes one 8-byte argument and returns with ret 8. */
void BF_XBOX_STDCALL FUN_0033f3ac(int64_t requested_system_time)
{
    (void)NtSetSystemTime(&requested_system_time, NULL);
}
