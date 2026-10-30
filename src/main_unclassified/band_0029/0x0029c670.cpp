/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44299942F5D0CD2A73F9A29EA5B87A6040B4CD640682A26B16DD54C63DBCED7B
 * Entry: 0x0029c670, Ghidra index: 9443, label: FUN_0029c670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_unexpected_end_of_file_in__s_00403e8c[];
float10 FUN_0029c670(void)

{
  int in_EAX;
  int iVar1;
  int *in_ECX;
  uint uVar2;
  float10 fVar3;
  double local_10c;
  undefined1 local_104 [260];
  
  if (in_EAX != 0) {
    iVar1 = FUN_0029c530(&local_10c,8);
    if (iVar1 != 0) {
      FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,in_ECX[4]);
    }
    return (float10)local_10c;
  }
  *in_ECX = *in_ECX + -1;
  if (*in_ECX < 0) {
    uVar2 = (*(code *)in_ECX[2])();
  }
  else {
    uVar2 = (uint)*(byte *)in_ECX[1];
    in_ECX[1] = (int)((byte *)in_ECX[1] + 1);
  }
  if (uVar2 == 0xffffffff) {
    FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,in_ECX[4]);
  }
  iVar1 = FUN_0029c530(local_104,uVar2);
  if (iVar1 != 0) {
    FUN_00295370(s_unexpected_end_of_file_in__s_00403e8c,in_ECX[4]);
  }
  iVar1 = in_ECX[4];
  local_104[uVar2] = 0;
  fVar3 = (float10)FUN_0029c620(iVar1);
  return fVar3;
}
