/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEC8EA72F77D39039FB3A2BC0EDD307CEE39530362CDB5E6060F3DA88C6338B2
 * Entry: 0x00068a00, Ghidra index: 1154, label: FUN_00068a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00069c20(int param_1);
extern void FUN_000698e0(int param_1);
extern void FUN_00069bb0(int param_1);
extern void FUN_000698a0(void);
extern void FUN_0006a470(void);

void FUN_00068a00(void)

{
  int in_EAX;
  undefined4 in_ECX;
  
  if (*(int *)(in_EAX + 0x94) != 0) {
    FUN_00069c20(*(undefined4 *)(in_EAX + 0x98),in_EAX + 0x90);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x94));
  }
  *(undefined4 *)(in_EAX + 0x94) = 0;
  *(undefined4 *)(in_EAX + 0x98) = 0;
  *(undefined4 *)(in_EAX + 0x9c) = 0;
  FUN_000698e0(in_EAX + 0x80);
  if (*(int *)(in_EAX + 0x74) != 0) {
    FUN_00069bb0(*(undefined4 *)(in_EAX + 0x78),in_EAX + 0x70,in_ECX);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x74));
  }
  *(undefined4 *)(in_EAX + 0x74) = 0;
  *(undefined4 *)(in_EAX + 0x78) = 0;
  *(undefined4 *)(in_EAX + 0x7c) = 0;
  FUN_000698a0();
  if (*(int *)(in_EAX + 0x54) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x54));
  }
  *(undefined4 *)(in_EAX + 0x54) = 0;
  *(undefined4 *)(in_EAX + 0x58) = 0;
  *(undefined4 *)(in_EAX + 0x5c) = 0;
  if (*(int *)(in_EAX + 0x44) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x44));
  }
  *(undefined4 *)(in_EAX + 0x44) = 0;
  *(undefined4 *)(in_EAX + 0x48) = 0;
  *(undefined4 *)(in_EAX + 0x4c) = 0;
  if (*(int *)(in_EAX + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x34));
  }
  *(undefined4 *)(in_EAX + 0x34) = 0;
  *(undefined4 *)(in_EAX + 0x38) = 0;
  *(undefined4 *)(in_EAX + 0x3c) = 0;
  FUN_0006a470();
  return;
}
