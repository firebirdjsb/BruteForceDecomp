/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33773287F52FC62FA6E8148C3E6420D2B242FC70F152F4B007A5C48B7FA474A1
 * Entry: 0x000b3520, Ghidra index: 2164, label: FUN_000b3520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039feb8;
extern uint32_t PTR_LAB_0039fea4;
void FUN_000b3520(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int *piVar2;
  undefined4 local_4;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039feb8;
  in_EAX[0xb] = &PTR_LAB_0039fea4;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) | 1;
  in_EAX[0x1d] = 0x3f800000;
  in_EAX[0x1e] = 0x3f800000;
  in_EAX[0x20] = 0x40400000;
  in_EAX[0x21] = 0x40400000;
  in_EAX[0x19] = 0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0xa0;
  *(undefined2 *)(in_EAX + 3) = 0x78;
  in_EAX[0x22] = 0;
  local_4 = 0xf5b6a9f8;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)in_EAX[0x1b];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      in_EAX[0x1b] = 0;
    }
    in_EAX[0x1b] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  local_4 = 0xf0d8a0a7;
  piVar2 = (int *)FUN_000a7770(&local_4);
  piVar1 = (int *)in_EAX[0x1c];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      in_EAX[0x1c] = 0;
    }
    in_EAX[0x1c] = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return;
}
