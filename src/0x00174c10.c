/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62BF5DBC1DF664B9D7702B7837244B7134EE6922C2AEC3C82F2663E79C2F2EA7
 * Entry: 0x00174c10, Ghidra index: 4920, label: FUN_00174c10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174c10(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  *(undefined1 *)(in_EAX + 0x7c) = 0;
  uVar1 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x4c))(*(int **)(in_EAX + 0x74));
  (**(code **)(**(int **)(in_EAX + 0x74) + 100))(*(int **)(in_EAX + 0x74),uVar1);
  return;
}
