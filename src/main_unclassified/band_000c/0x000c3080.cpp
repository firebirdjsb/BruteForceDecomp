/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3357D91EC2AAB1C82278445C0306EF7FE8353DDCFD1BCF10A3959224E293E6A8
 * Entry: 0x000c3080, Ghidra index: 2385, label: FUN_000c3080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_000ba6d0(void);
extern int FUN_000a7770(uint *param_1);
extern int FUN_0015e4b0(void);

extern uint32_t DAT_003c8da8;
extern uint32_t DAT_003c8dac;
extern uint32_t DAT_003c8db0;
extern uint32_t DAT_003c8db4;
void FUN_000c3080(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  undefined2 local_8;
  undefined2 local_4;
  
  iVar4 = param_1;
  if (in_ECX == *(int *)(param_1 + 0x38)) {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x28) + -0x2c;
    }
    if ((*(byte *)(*(int *)(iVar5 + 100) + 0x74) & 1) == *(uint *)(param_1 + 0x3c)) {
      return;
    }
  }
  iVar5 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x38) = in_ECX;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar5 + -0x2c;
  }
  *(uint *)(param_1 + 0x3c) = *(byte *)(*(int *)(iVar7 + 100) + 0x74) & 1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar5 + -0x2c;
  }
  uVar1 = *(undefined4 *)
           (&DAT_003c8da8 + (in_ECX + (*(byte *)(*(int *)(iVar7 + 100) + 0x74) & 1) * 4) * 0x10);
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar5 + -0x2c;
  }
  uVar2 = *(undefined4 *)
           (&DAT_003c8dac + (in_ECX + (*(byte *)(*(int *)(iVar7 + 100) + 0x74) & 1) * 4) * 0x10);
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar5 + -0x2c;
  }
  *(undefined2 *)(param_1 + 0xe) =
       *(undefined2 *)
        (&DAT_003c8db0 + (in_ECX + (*(byte *)(*(int *)(iVar7 + 100) + 0x74) & 1) * 4) * 0x10);
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar5 + -0x2c;
  }
  *(undefined2 *)(param_1 + 0xc) =
       *(undefined2 *)
        (&DAT_003c8db4 + (in_ECX + (*(byte *)(*(int *)(iVar7 + 100) + 0x74) & 1) * 4) * 0x10);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -0x2c;
  }
  if ((*(byte *)(*(int *)(iVar5 + 100) + 0x74) & 1) == 0) {
    if ((in_ECX == 0) || (in_ECX == 2)) {
      param_1 = 0xe0706e07;
      FUN_000ba6d0();
      param_1 = 0xe684da10;
      piVar6 = (int *)FUN_000a7770(&param_1);
      piVar3 = *(int **)(iVar4 + 0x30);
      if (piVar3 != piVar6) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *(undefined4 *)(iVar4 + 0x30) = 0;
        }
        *(int **)(iVar4 + 0x30) = piVar6;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
      }
      goto LAB_000c329b;
    }
    param_1 = 0xff5cfb;
    FUN_000ba6d0();
    param_1 = 0x1cee1256;
  }
  else {
    if ((in_ECX == 0) || (in_ECX == 2)) {
      param_1 = 0x15a322e6;
      FUN_000ba6d0();
      param_1 = 0xb8edd15;
      piVar6 = (int *)FUN_000a7770(&param_1);
      piVar3 = *(int **)(iVar4 + 0x30);
      if (piVar3 != piVar6) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *(undefined4 *)(iVar4 + 0x30) = 0;
        }
        *(int **)(iVar4 + 0x30) = piVar6;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
      }
      goto LAB_000c329b;
    }
    param_1 = 0x136ad017;
    FUN_000ba6d0();
    param_1 = 0x3b50287;
  }
  FUN_000a7770(&param_1);
  FUN_0015e4b0();
LAB_000c329b:
  local_8 = (undefined2)uVar1;
  local_4 = (undefined2)uVar2;
  *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0xfe;
  *(undefined2 *)(iVar4 + 4) = local_8;
  *(undefined2 *)(iVar4 + 6) = local_4;
  return;
}
