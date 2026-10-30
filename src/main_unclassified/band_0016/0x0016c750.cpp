/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6D68448F7C71B83B511BD414900501CF6E5A10ADACBA5F6BCD08856262C1605
 * Entry: 0x0016c750, Ghidra index: 4785, label: FUN_0016c750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original Xbox image mapped address 0x0039a770; address-only declaration.
 * Linked definition, actual type and semantic role remain unverified. */
extern unsigned char LAB_0039a770;
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039a748;
extern uint32_t PTR_FUN_0039a758;
extern uint32_t PTR_FUN_0039a828;
extern uint32_t PTR_FUN_0039c2a0;
extern char s_23_23_ICRSpline_00405020[];
extern char s_23_23_IMotionPath_0040500c[];
undefined4 * FUN_0016c750(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_retaddr;
  int iStack_34;
  
  puVar2 = param_1;
  param_1[1] = 0;
  param_1[3] = PTR_FUN_0039a828;
  param_1[2] = PTR_FUN_0039c2a0;
  param_1[3] = PTR_FUN_0039a828;
  param_1[4] = 0;
  param_1[1] = 0xed0305a6;
  *param_1 = &LAB_0039a770;
  param_1[2] = &PTR_FUN_0039a758;
  param_1[3] = &PTR_FUN_0039a748;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0xffffffff;
  param_1[5] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar3 = (undefined1 *)FUN_002ea01d(0x1c);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    *(undefined4 *)(puVar3 + 4) = 0xffffffff;
  }
  param_1[6] = puVar3;
  param_1 = (undefined4 *)0x0;
  iStack_34 = 0x469dd0;
  iVar4 = (int)param_1;
  do {
    param_1 = (undefined4 *)iVar4;
    FUN_0016b540();
    FUN_0016c460(param_1);
    iStack_34 = iStack_34 + 0xc;
    iVar4 = (int)param_1 + 2000;
  } while (iStack_34 < 0x469e00);
  puVar1 = puVar2 + 5;
  iVar4 = FUN_00238080(s_23_23_ICRSpline_00405020,puVar1);
  if (-1 < iVar4) {
    (*(code *)**(undefined4 **)*puVar1)
              ((undefined4 *)*puVar1,s_23_23_IMotionPath_0040500c,puVar2 + 7);
    if ((param_1 != (undefined4 *)0x0) && (unaff_retaddr != 0)) {
      func_0x0016cd30(puVar2,unaff_retaddr);
      (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_1,0);
      return puVar2;
    }
    func_0x0016cd30(puVar2,4);
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,0x469dd0,4);
  }
  return puVar2;
}
