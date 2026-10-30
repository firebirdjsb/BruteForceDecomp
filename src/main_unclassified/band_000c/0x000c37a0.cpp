/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBC1C8DD2BF360492E7E9833C85831022740248028E6FC8E2255E144FA38EE52
 * Entry: 0x000c37a0, Ghidra index: 2389, label: FUN_000c37a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000a7770(uint *param_1);

extern uint32_t DAT_004a5c78;
extern uint32_t DAT_004a5c7c;
extern uint32_t PTR_FUN_0039f460;
void FUN_000c37a0(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *unaff_ESI;
  undefined4 local_4;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039f460;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  local_4 = 0x17fb74d8;
  piVar3 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xc];
  if (piVar1 != piVar3) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xc] = 0;
    }
    unaff_ESI[0xc] = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  local_4 = 0x542786d;
  piVar3 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xd];
  if (piVar1 != piVar3) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xd] = 0;
    }
    unaff_ESI[0xd] = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  uVar2 = DAT_004a5c7c;
  *(undefined2 *)((int)unaff_ESI + 0xe) = 0x20;
  *(undefined2 *)(unaff_ESI + 3) = 0x20;
  if ((uVar2 & 1) == 0) {
    DAT_004a5c78 = 0xffffffff;
    unaff_ESI[0xb] = 0xffffffff;
    DAT_004a5c7c = DAT_004a5c7c | 1;
    return;
  }
  unaff_ESI[0xb] = DAT_004a5c78;
  return;
}
