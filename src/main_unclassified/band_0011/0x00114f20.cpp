/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F8E717C6EE5210D98CE36FC83EBC82CC6530F76999EC680F42A9F7208CE3C859
 * Entry: 0x00114f20, Ghidra index: 3574, label: FUN_00114f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D direct/indirect guest32 allocator boundary:
 * one source size DWORD and 32-bit EAX result. Guest-memory ABI unverified. */
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039dbd0;
undefined4 FUN_00114f20(undefined4 param_1,int param_2)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  
  if (((in_EAX != 0) && (in_EAX != -1)) && (param_2 != 0)) {
    piVar1 = (int *)FUN_002ea01d(0x10);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1[1] = 0;
      piVar1[2] = 0;
      *piVar1 = (int)&PTR_LAB_0039dbd0;
      piVar1[3] = -1;
    }
    piVar1[3] = in_EAX;
    piVar1[2] = param_2;
    FUN_002b9940();
    iVar2 = FUN_002ea01d(0x60);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_002b9980();
    }
    piVar1[1] = iVar2;
    (**(code **)(*piVar1 + 4))();
    FUN_001611d0();
    FUN_001611d0();
    return 1;
  }
  return 0;
}
