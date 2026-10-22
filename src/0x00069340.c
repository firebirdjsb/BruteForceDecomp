/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0365A14D700DD0AF432D0D18ABD821BFFF1A67D610917B0A76582AE1A618321
 * Entry: 0x00069340, Ghidra index: 1162, label: FUN_00069340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698cc;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b60;
void FUN_00069340(void)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *(int *)(DAT_0046995c + 0x1c);
  if (((iVar1 == 0) || (((*(char *)(DAT_0046995c + 0xa0) == '\0' && (iVar1 != 4)) || (iVar1 != 5))))
     && (DAT_00469b60 == '\0')) {
    DAT_004698cc = DAT_004698cc + 1;
    (**(code **)(*in_EAX + 0x2c))(0);
    FUN_00069390();
  }
  return;
}
