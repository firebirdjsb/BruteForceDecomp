/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C98508AC65E4754B476EE42C95AC268EF79BB264BB6D8AE33B0DD8350CB42399
 * Entry: 0x000b4df0, Ghidra index: 2180, label: FUN_000b4df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x000BA5B0 constructor draft accepts one 32-bit
 * word-pointer argument. Xbox guest object layout/ABI remain UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000a7770(uint *param_1);

extern uint32_t PTR_FUN_0039fe38;
void FUN_000b4df0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *unaff_ESI;
  undefined4 local_4;
  
  FUN_000ba5b0(unaff_ESI);
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039fe38;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  *(undefined2 *)((int)unaff_ESI + 0xe) = 0x40;
  *(undefined2 *)(unaff_ESI + 3) = 0x40;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x10] = 0;
  local_4 = 0xe1b45a4c;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)unaff_ESI[0xc];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0xc] = 0;
    }
    unaff_ESI[0xc] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return;
}
