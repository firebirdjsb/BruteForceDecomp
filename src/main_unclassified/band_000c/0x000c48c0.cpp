/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD27965019CD9C734EBBFC20E1FBC2957CD081CB41DD1BACDBE31E6412F61252
 * Entry: 0x000c48c0, Ghidra index: 2408, label: FUN_000c48c0
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
extern uint32_t PTR_FUN_0039f51c;
void FUN_000c48c0(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *unaff_ESI;
  undefined4 local_4;
  
  FUN_000ba5b0(unaff_ESI);
  uVar2 = DAT_004a5c7c;
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039f51c;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  *(undefined2 *)((int)unaff_ESI + 0xe) = 0x20;
  *(undefined2 *)(unaff_ESI + 3) = 0x20;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  if ((uVar2 & 1) == 0) {
    DAT_004a5c7c = DAT_004a5c7c | 1;
    DAT_004a5c78 = 0xffffffff;
  }
  unaff_ESI[0xb] = DAT_004a5c78;
  local_4 = 0x16c3d13;
  piVar3 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xf];
  if (piVar1 != piVar3) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xf] = 0;
    }
    unaff_ESI[0xf] = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  local_4 = 0x91adf04;
  piVar3 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xe];
  if (piVar1 != piVar3) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xe] = 0;
    }
    unaff_ESI[0xe] = piVar3;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
  }
  return;
}
