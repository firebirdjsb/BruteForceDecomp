/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32B687832DB733AA269F254BD83A779DC71627EDF22F7BB77715EFCD7146D095
 * Entry: 0x002fe4a6, Ghidra index: 11024, label: FUN_002fe4a6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern undefined4 FUN_002fe2fd(int param_1,int param_2,undefined4 param_3);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x002FE51B: FF 15 58 4B 41 00 is CALL DWORD PTR
 * [0x00414B58]. This guest IAT cell holds a function pointer,
 * NOT a pointer to a scalar uint32_t. CALL is preceded by
 * PUSH [EAX] and PUSH &local_34 (right-to-left guest arguments),
 * then ADD ESP,8. Exact external function and host call ABI are
 * not yet identified; 'code *' is only a C11 syntax bridge. */
extern code *DAT_00414b58;
undefined4
FUN_002fe4a6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  /* XBE 0x002FE4E7 MOV [EBP-0x0C],ESP and 0x002FE4EA
   * MOV [EBP-0x08],EBP store guest SEH metadata. Their
   * Ghidra host C aliases local_c and local_10 have no reads;
   * no native stack address or Windows/Linux SEH is inferred. */
  int local_8;
  
  local_28 = FUN_002fe2fd;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x2fe527;
  local_2c = (undefined4 *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_2c;
  local_34 = param_1;
  local_30 = param_3;
  (*DAT_00414b58)(*param_1,&local_34);
  if (local_8 == 0) {
    *unaff_FS_OFFSET = (int)local_2c;
  }
  else {
    *local_2c = *(undefined4 *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = (int)local_2c;
  }
  return 0;
}
