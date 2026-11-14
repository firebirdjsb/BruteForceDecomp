/* Original Xbox guest CPUID dispatch at 0x0029d6c0.
 * Input x86 body SHA-256: 99E3313981C8236C06309DDED68ECF6A13022E0B9119F1274E6325FDC921C135
 * Entry: 0x0029d6c0 | Ghidra label: FUN_0029d6c0
 * Pinned XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 *
 * Retained Ghidra draft (its ABI and types remain unresolved):
 *   *(int *)(param_1 + 4) = param_2;
 *   iVar1 = cpuid_Version_info(1);
 *   if ((*(uint *)(iVar1 + 8) & 0x02000000) == 0)
 *       *(undefined **)(param_1 + 0x20) = (&PTR_LAB_00403ce4)[param_2];
 *   else
 *       *(undefined **)(param_1 + 0x20) = (&PTR_LAB_00403cc8)[param_2];
 */
#include "bf_0029_cpuid_dispatch.h"

void FUN_0029d6c0(bf_guest32_constructor_state &guest,
                  const bf_0029_cpuid_backend &cpuid)
{
    bf_0029_execute_cpuid_dispatch(
        guest, cpuid, 0x0029d6c0u, 0x00403cc8u, 0x00403ce4u);
}
