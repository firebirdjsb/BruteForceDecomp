/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B540AA79896F6AF81CD262C32F5DFC803EC408DA95A2D8B6C31DC99F8104370
 * Entry: 0x0007b010, Ghidra index: 1462, label: FUN_0007b010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0007b010(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x654);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_000856a0(in_EAX + 0x650,local_24,uVar2,puVar1);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = FUN_00085710(local_10);
  local_8 = 0;
  local_4 = 0;
  FUN_001e36a0();
  FUN_001e4290(local_20,in_EAX + 0x650);
  FUN_001e43e0();
  FUN_0007b090();
  return;
}
