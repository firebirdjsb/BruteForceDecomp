/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C1BA383648633768A55CF4CC6C8F4CEF26A9B98D0E8482AEFFEA776313929BB
 * Entry: 0x002578c0, Ghidra index: 8459, label: FUN_002578c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0046990c;
extern char s_23_23_ISchema_00406e3c[];
undefined4 FUN_002578c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  int *piStack_20;
  undefined1 *puStack_1c;
  int *apiStack_c [2];
  undefined1 local_4 [4];
  /* XBE 0x002578CD selects entry ESP-0x04 for the 32-bit schema tag.
   * XBE 0x00257906 selects entry ESP-0x0C, a DIFFERENT DWORD for
   * the vtable+0x0C flags output. Retain these as separate 32-bit
   * guest data slots; native COM ABI remains unverified. */
  uint32_t schema_tag;
  uint32_t schema_flags;
  
  puStack_1c = local_4;
  piStack_20 = param_1;
  (**(code **)(*param_1 + 0x14))();
  memcpy(&schema_tag, local_4, sizeof(schema_tag));
  if (schema_tag == UINT32_C(0x0e07067e)) {
    return 0;
  }
  iVar1 = FUN_00257860();
  if (iVar1 < 0) {
    return 0x80004005;
  }
  /* XBE 0x00257906: LEA EAX,[ESP+0x14], PUSH EAX.
   * Following saved EBX/EBP, this is entry ESP-0x0C: flags DWORD.
   * The vtable method writes it; it is not the schema-tag slot. */
  (**(code **)(*param_1 + 0xc))(param_1,&schema_flags);
  if ((schema_flags & UINT32_C(0x10)) != 0) {
    piStack_20 = (int *)0x0;
    (**(code **)(*param_1 + 0x1c))(param_1,&piStack_20);
    if (piStack_20 != (int *)0x0) {
      apiStack_c[0] = (int *)0x0;
      (**(code **)(*piStack_20 + 0x10))(piStack_20,s_23_23_ISchema_00406e3c,apiStack_c);
      iVar1 = FUN_002578c0(apiStack_c[0]);
      if (iVar1 < 0) goto LAB_00257958;
      FUN_00076fc0();
      if (piStack_20 != (int *)0x0) {
        (**(code **)(*piStack_20 + 8))(piStack_20);
      }
    }
  }
  if ((schema_flags & UINT32_C(0x100)) != 0) {
    piStack_20 = (int *)0x0;
    (**(code **)(*param_1 + 0x20))(param_1,&piStack_20);
    if (piStack_20 != (int *)0x0) {
      apiStack_c[0] = (int *)0x0;
      (**(code **)(*piStack_20 + 0x10))(piStack_20,s_23_23_ISchema_00406e3c,apiStack_c);
      iVar1 = FUN_002578c0(apiStack_c[0]);
      if (iVar1 < 0) {
LAB_00257958:
        FUN_00076fc0();
        piVar2 = piStack_20;
LAB_00257961:
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        return 0x80004005;
      }
      FUN_00076fc0();
      if (piStack_20 != (int *)0x0) {
        (**(code **)(*piStack_20 + 8))(piStack_20);
      }
    }
  }
  (**(code **)(*DAT_0046990c + 0x2c))(DAT_0046990c,&stack0xffffffe8,param_1);
  iVar1 = 0;
  if (0 < unaff_EDI) {
    do {
      apiStack_c[0] = (int *)0x0;
      iVar3 = (**(code **)(*DAT_0046990c + 0x30))(DAT_0046990c,param_1,iVar1,apiStack_c);
      if (iVar3 < 0) {
        if (apiStack_c[0] != (int *)0x0) {
          (**(code **)(*apiStack_c[0] + 8))(apiStack_c[0]);
        }
        return 0x80004005;
      }
      iVar3 = FUN_002578c0(apiStack_c[0]);
      piVar2 = apiStack_c[0];
      if (iVar3 < 0) goto LAB_00257961;
      if (apiStack_c[0] != (int *)0x0) {
        (**(code **)(*apiStack_c[0] + 8))(apiStack_c[0]);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_EDI);
  }
  return 0;
}
