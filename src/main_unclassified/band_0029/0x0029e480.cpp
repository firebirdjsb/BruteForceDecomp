/* Original Xbox guest CPUID dispatch at 0x0029e480.
 * Input x86 body SHA-256: 79BE91987C13A57B689CF0E303D7CEBDA9A8DB82127599C5E016B6C99783E8DA
 * Entry: 0x0029e480 | Ghidra label: FUN_0029e480
 * Pinned XBE SHA-256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 *
 * Retained Ghidra draft (its ABI and types remain unresolved):
 *   *(int *)(param_1 + 4) = param_2;
 *   iVar1 = cpuid_Version_info(1);
 *   if ((*(uint *)(iVar1 + 8) & 0x02000000) == 0)
 *       *(undefined **)(param_1 + 0x20) = (&PTR_LAB_00403c54)[param_2];
 *   else
 *       *(undefined **)(param_1 + 0x20) = (&PTR_LAB_00403c38)[param_2];
 */
#include "bf_0029_cpuid_dispatch.h"

void FUN_0029e480(bf_guest32_constructor_state &guest,
                  const bf_0029_cpuid_backend &cpuid)
{
    bf_0029_execute_cpuid_dispatch(
        guest, cpuid, 0x0029e480u, 0x00403c38u, 0x00403c54u);
}
