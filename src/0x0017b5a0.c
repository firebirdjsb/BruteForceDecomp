/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CE677CD69F61914C9B92014DBA5B5B0F83FF69B927FD22C38EA0F59105C8B5F
 * Entry: 0x0017b5a0, Ghidra index: 5030, label: FUN_0017b5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017b5a0(uint param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint local_8;
  
  if ((*(int *)(in_ECX + 8) != 0) && (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2 != 0)) {
    iVar1 = *(int *)(in_ECX + 0xc);
    local_8 = param_1 & 0xff;
    piVar2 = (int *)FUN_0017d520(*(undefined4 *)(in_ECX + 8),iVar1,local_8,param_1);
    if (*piVar2 != iVar1) {
      return 1;
    }
  }
  return 0;
}
