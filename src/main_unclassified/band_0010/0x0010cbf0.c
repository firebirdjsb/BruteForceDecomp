/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCB51D8E5CAEC24775FDB6195C8452EDD3248BBFA95C080F5B9F1FE977C528F8
 * Entry: 0x0010cbf0, Ghidra index: 3479, label: FUN_0010cbf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e020;
undefined4 * FUN_0010cbf0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_4;
  
  FUN_000ee640();
  piVar1 = param_1 + 0x18;
  *param_1 = &PTR_FUN_0039e020;
  FUN_00109f80(piVar1);
  piVar2 = param_1 + 0x55;
  FUN_00109f80(piVar2);
  param_1[0x1a] = param_1;
  (**(code **)(*piVar1 + 0x30))();
  param_1[0x57] = param_1;
  (**(code **)(*piVar2 + 0x30))();
  uStack_4 = 0xffffffff;
  uVar3 = uStack_4;
  *(undefined4 *)((int)param_1 + 0x8d) = 0xffffffff;
  (**(code **)(*piVar1 + 0x34))();
  *(undefined4 *)((int)param_1 + 0x89) = 0xffffffff;
  uStack_4 = uVar3;
  FUN_000ee5c0(&uStack_4,0x3f000000);
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = uStack_4;
  (**(code **)(*piVar1 + 0x34))();
  *(undefined4 *)((int)param_1 + 0x181) = 0xffffffff;
  (**(code **)(*piVar2 + 0x34))();
  *(undefined4 *)((int)param_1 + 0x17d) = 0xffffffff;
  uStack_4 = uVar3;
  FUN_000ee5c0(&uStack_4,0x3f000000);
  param_1[100] = uStack_4;
  param_1[99] = 0xffffffff;
  (**(code **)(*piVar2 + 0x34))();
  *(undefined4 *)((int)param_1 + 0x185) = 0xffffffff;
  (**(code **)(*piVar2 + 0x34))();
  param_1[0x3a] = 0;
  param_1[0x3b] = 2;
  FUN_0010ab60();
  param_1[0x77] = 0;
  param_1[0x78] = 2;
  FUN_0010ab60();
  param_1[0x3e] = 0xe38a4ca;
  param_1[0x3f] = 0x10;
  uVar3 = FUN_000cd9c0();
  param_1[0x54] = uVar3;
  return param_1;
}
