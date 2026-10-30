/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DAB0C7E0E73EFC0B65F12277FD439204BA444AC601F0FE9B0927A1D2C7CE78DA
 * Entry: 0x002ac280, Ghidra index: 9667, label: FUN_002ac280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
extern uint32_t PTR_LAB_0038f6c0;
undefined4 FUN_002ac280(int *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  float original_format_version;
  int iStack_1d4;
  int *piStack_1d0;
  undefined1 *puStack_1cc;
  int *piStack_1c8;
  undefined1 *puStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_1b8;
  undefined1 *puStack_1b4;
  int *piStack_1b0;
  undefined1 **ppuStack_1ac;
  int *piStack_1a8;
  uint *puStack_1a4;
  int *piStack_1a0;
  int **ppiStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int *piStack_190;
  undefined1 *puStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int *piStack_180;
  undefined1 *puStack_17c;
  uint auStack_178 [2];
  undefined1 local_154 [4];
  undefined1 auStack_150 [24];
  char cStack_138;
  char acStack_137 [307];
  
  auStack_178[1] = 0;
  auStack_178[0] = 4;
  puStack_17c = local_154;
  piStack_180 = param_2;
  uStack_184 = 0x2ac2a2;
  (**(code **)(*param_2 + 0x10))(param_2,local_154,4,0);
  uStack_184 = 0;
  uStack_188 = 4;
  /* XBE 0x2AC2A7: B+0x18 is the count word, not the float word. */
  puStack_18c = (undefined1 *)&auStack_178[0];
  piStack_190 = param_2;
  uStack_194 = 0x2ac2b0;
  (**(code **)(*param_2 + 0x10))(param_2,&auStack_178[0],4,0);
  puStack_17c = (undefined1 *)0x0;
  if (0 < (int)auStack_178[0]) {
    do {
      iVar5 = 0;
      uStack_194 = 0x40;
      uStack_198 = 0x2ac2c9;
      piVar3 = (int *)FUN_002ea01d();
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3[1] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        piVar3[7] = 0;
        piVar3[8] = 0;
        piVar3[9] = 0;
        piVar3[0xe] = 0;
        *piVar3 = (int)&PTR_LAB_0038f6c0;
        piVar3[0xf] = 1;
      }
      uStack_194 = 0;
      uStack_198 = 2;
      ppiStack_19c = &piStack_180;
      piStack_1a0 = param_2;
      puStack_1a4 = (uint *)0x2ac309;
      (**(code **)(*param_2 + 0x10))();
      if ((short)piStack_190 == 0) {
        cStack_138 = '\0';
      }
      else {
        piStack_1a8 = (int *)((uint)piStack_190 & 0xffff);
        puStack_1a4 = (uint *)0x0;
        ppuStack_1ac = (undefined1 **)&cStack_138;
        piStack_1b0 = param_2;
        puStack_1b4 = (undefined1 *)0x2ac32a;
        (**(code **)(*param_2 + 0x10))();
        if (((uint)piStack_190 & 1) != 0) {
          puStack_1a4 = (uint *)0x0;
          piStack_1a8 = (int *)0x1;
          ppuStack_1ac = &puStack_17c;
          piStack_1b0 = param_2;
          puStack_1b4 = (undefined1 *)0x2ac33f;
          (**(code **)(*param_2 + 0x10))();
        }
      }
      auStack_178[0] = 0xffffffff;
      pcVar4 = &cStack_138;
      cVar2 = cStack_138;
      while (cVar2 != '\0') {
        auStack_178[0] =
             auStack_178[0] >> 8 ^
             *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ auStack_178[0]) & 0xff) * 4)
        ;
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        cVar2 = *pcVar1;
      }
      auStack_178[0] = ~auStack_178[0];
      puStack_1a4 = auStack_178;
      ppuStack_1ac = (undefined1 **)0x2ac387;
      piStack_1a8 = piVar3;
      (**(code **)(*piVar3 + 0x10))();
      /* XBE 0x2AC387 FLD [ESP+0x1C] reads the first four-byte
       * stream output, local_154, as IEEE-754 binary32. Byte copy
       * preserves this f32 storage identity without pointer-to-float. */
      memcpy(&original_format_version,local_154,sizeof(original_format_version));
      if (original_format_version < 1.1) {
        uStack_188 = 0;
        auStack_178[1] = 0;
        ppuStack_1ac = (undefined1 **)auStack_178;
        puStack_17c = (undefined1 *)0x0;
        auStack_178[0] = 0;
        puStack_1b4 = (undefined1 *)0x2ac3fc;
        piStack_1b0 = piVar3;
        (**(code **)(*piVar3 + 0x4c))();
      }
      else {
        ppuStack_1ac = (undefined1 **)0x0;
        piStack_1b0 = (int *)0xc;
        /* B+0x58 is 8 bytes into the 24-byte auStack_150 region. */
        puStack_1b4 = &auStack_150[8];
        piStack_1b8 = param_2;
        uStack_1bc = 0x2ac3a6;
        (**(code **)(*param_2 + 0x10))(param_2,&auStack_150[8],0xc,0);
        uStack_1bc = 0;
        uStack_1c0 = 4;
        /* Adjacent four bytes: B+0x64, completing 16 contiguous bytes. */
        puStack_1c4 = &auStack_150[20];
        piStack_1c8 = param_2;
        puStack_1cc = (undefined1 *)0x2ac3b4;
        (**(code **)(*param_2 + 0x10))(param_2,&auStack_150[20],4,0);
        puStack_1cc = &auStack_150[8];
        iStack_1d4 = 0x2ac3bf;
        piStack_1d0 = piVar3;
        (**(code **)(*piVar3 + 0x4c))(piVar3,&auStack_150[8]);
      }
      iStack_1d4 = 0;
      (**(code **)(*param_2 + 0x10))(param_2,&puStack_1c4,4);
      if (0 < iStack_1d4) {
        do {
          (**(code **)(*param_2 + 0x10))(param_2,&uStack_198,0x10,0);
          (**(code **)(*piVar3 + 0x18))(piVar3,&piStack_1a8,0,ppiStack_19c);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iStack_1d4);
      }
      iVar6 = 0;
      (**(code **)(*param_2 + 0x10))(param_2,&iStack_1d4,4);
      iVar5 = 0;
      if (0 < iVar6) {
        do {
          (**(code **)(*param_2 + 0x10))(param_2,&piStack_1b0,8,0);
          (**(code **)(*piVar3 + 0x24))(piVar3,&uStack_1c0);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      (**(code **)(*param_1 + 0x10))(param_1,piVar3,0);
      puStack_17c = puStack_17c + 1;
    } while ((int)puStack_17c < (int)auStack_178[0]);
  }
  return 0;
}
