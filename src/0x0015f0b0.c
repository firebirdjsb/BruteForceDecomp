/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3B5C290C473E7F882ADF65B46629AD2B89C725B5D035830400B8562AC8ED004
 * Entry: 0x0015f0b0, Ghidra index: 4569, label: FUN_0015f0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d004;
extern uint32_t DAT_0046d064;
undefined4 FUN_0015f0b0(void)

{
  int iVar1;
  int *in_EAX;
  int in_ECX;
  undefined4 in_EDX;
  
  iVar1 = *in_EAX;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if (in_EAX[1] != DAT_0046d064) {
        FUN_000d6ac0(in_EDX,in_ECX,0);
      }
      if (in_EAX[2] != 0) {
        FUN_0003d730(in_ECX + 0x10,in_EAX[2]);
        return 1;
      }
      FUN_0003d730(in_ECX + 0x10,&DAT_0046d004);
      return 1;
    }
    if (in_EAX[1] != DAT_0046d064) {
      FUN_000d6ac0(in_EDX,in_ECX,0);
    }
    if ((undefined4 *)in_EAX[3] != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)in_EAX[3];
      *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(in_EAX[3] + 4);
      return 1;
    }
    *(int *)(in_ECX + 0x40) = DAT_0046d064;
    *(undefined4 *)(in_ECX + 0x44) = 0xffffffff;
  }
  return 1;
}
