/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDBCD1ED588E2A0B0D95A71E1E99FEEFF71FC009F7644F605D6BAA9655143C5F
 * Entry: 0x001f8b30, Ghidra index: 7069, label: FUN_001f8b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396620;
extern uint32_t PTR_LAB_0039644c;
extern uint32_t PTR_LAB_00396458;
extern uint32_t PTR_LAB_00396470;
extern uint32_t PTR_LAB_003967a8;
extern uint32_t PTR_LAB_003967b8;
void FUN_001f8b30(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 uVar4;
  undefined1 auStack_4 [4];
  
  puVar1 = (undefined4 *)in_ECX[0x3e];
  *in_ECX = &PTR_FUN_00396620;
  in_ECX[2] = &PTR_LAB_00396470;
  in_ECX[3] = &PTR_LAB_003967b8;
  in_ECX[0x10] = &PTR_LAB_00396458;
  in_ECX[0x11] = &PTR_LAB_003967a8;
  in_ECX[0x1f] = &PTR_LAB_0039644c;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)puVar1[0x1f];
    (**(code **)*puVar1)(1);
    in_ECX[0x3e] = 0;
    iVar3 = (**(code **)(*piVar2 + 0x28))();
    if (iVar3 == 0) {
      (**(code **)(*piVar2 + 0x24))(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x44];
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  FUN_001298b0(auStack_4,uVar4,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x44]);
}
