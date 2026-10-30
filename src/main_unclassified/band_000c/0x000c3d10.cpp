/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 180AFA3A3A676817AD1FE0BC039CEB709F4CD6B611DE3040A28B28F793D9AC77
 * Entry: 0x000c3d10, Ghidra index: 2399, label: FUN_000c3d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000a7770(uint *param_1);

extern uint32_t PTR_FUN_0039f4f0;
void FUN_000c3d10(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_ESI;
  undefined4 local_4;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039f4f0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x11] = 0;
  *(undefined2 *)((int)unaff_ESI + 0xe) = 8;
  *(undefined2 *)(unaff_ESI + 3) = 8;
  local_4 = 0xeeaa5549;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xe];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xe] = 0;
    }
    unaff_ESI[0xe] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  local_4 = 0xeed3270a;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xd];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xd] = 0;
    }
    unaff_ESI[0xd] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  local_4 = 0xfa29b7a4;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xf];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xf] = 0;
    }
    unaff_ESI[0xf] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  local_4 = 0xe878453f;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0x10];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0x10] = 0;
    }
    unaff_ESI[0x10] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  local_4 = 0xf6722366;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0x11];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0x11] = 0;
    }
    unaff_ESI[0x11] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  unaff_ESI[0xc] = 0;
  unaff_ESI[0x12] = 0;
  *(undefined1 *)(unaff_ESI + 0x13) = 0;
  *(byte *)((int)unaff_ESI + 0x13) = *(byte *)((int)unaff_ESI + 0x13) | 1;
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  return;
}
