/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 884AD8BFF7A1818892EE0C41FB269353069AAFDC89B18566321F6BFE88EF823F
 * Entry: 0x000c7660, Ghidra index: 2450, label: FUN_000c7660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched 0x000BA5B0 one-word-pointer constructor argument;
 * Xbox this-register, object and stack contracts remain ABI_UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000a7770(uint *param_1);

extern uint32_t DAT_0046d064;
extern uint32_t PTR_FUN_0039f290;
void FUN_000c7660(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  int *piVar4;
  undefined4 local_4;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039f290;
  puVar1 = unaff_ESI + 0x13;
  iVar3 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  unaff_ESI[0x19] = 0;
  *(undefined2 *)((int)unaff_ESI + 0xe) = 0x40;
  *(undefined2 *)(unaff_ESI + 3) = 0x40;
  unaff_ESI[0xc] = 0xffffff24;
  unaff_ESI[0xd] = 0x4b;
  unaff_ESI[0xe] = 0xffffffba;
  unaff_ESI[0xf] = 0x10;
  unaff_ESI[0x10] = 0x14;
  puVar1 = unaff_ESI + 0x14;
  iVar3 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  unaff_ESI[0x18] = 0;
  local_4 = 0x5626ad2;
  if (unaff_ESI[9] != 0x5626ad2) {
    piVar4 = (int *)0x0;
    if (DAT_0046d064 != 0x5626ad2) {
      piVar4 = (int *)FUN_000a7770(&local_4);
    }
    piVar2 = (int *)unaff_ESI[8];
    if ((piVar4 != piVar2) && (piVar2 != piVar4)) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        unaff_ESI[8] = 0;
      }
      unaff_ESI[8] = piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
    }
    unaff_ESI[9] = 0x5626ad2;
  }
  local_4 = 0x79bdeb6;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar4 = (int *)unaff_ESI[0x19];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      unaff_ESI[0x19] = 0;
    }
    unaff_ESI[0x19] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  unaff_ESI[0x11] = 0x3f800000;
  return;
}
