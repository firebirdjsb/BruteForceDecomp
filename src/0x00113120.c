/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7DBA3E9CDE2E6133BC98944780D57BE0F472759A444E73AC803E6A77DA0FF40
 * Entry: 0x00113120, Ghidra index: 3565, label: FUN_00113120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_00113120(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_16c;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c [12];
  undefined4 local_150;
  undefined1 local_14c [220];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_002b8f20();
  FUN_00039510();
  local_150 = 0;
  FUN_002b9370(local_14c,local_15c,0,3,0,unaff_EDI,0);
  puVar2 = *(uint **)(unaff_EBX + 0xc);
  if (puVar2 == (uint *)0x0) {
    puVar2 = &DAT_0046d064;
  }
  uVar1 = *puVar2;
  if (uVar1 < 0x1fda09f9) {
    if (uVar1 == 0x1fda09f8) {
LAB_001133ed:
      local_16c = 0xbedf66f3;
      local_58 = 0xbf060a92;
      local_40 = 0x3f060a92;
      local_54 = 0xbf860a92;
      local_17c = 0x3f32b8c2;
      local_178 = 0x3f5f66f3;
LAB_00113772:
      local_164 = local_178;
      local_160 = local_17c;
    }
    else {
      if (uVar1 < 0x108b1fae) {
        if (uVar1 != 0x108b1fad) {
          if (uVar1 < 0x72a54b6) {
            if (uVar1 == 0x72a54b5) {
LAB_00113325:
              local_16c = 0xbedf66f3;
              local_58 = 0xbf490fdb;
              local_40 = 0x3f490fdb;
              local_54 = 0xbf490fdb;
              local_17c = 0x3edf66f3;
              local_178 = 0x3f490fdb;
              goto LAB_00113772;
            }
            if (uVar1 < 0x4d2c4c9) {
              if (uVar1 == 0x4d2c4c8) goto LAB_001133ed;
              if (uVar1 == 0x240627e) goto LAB_001134ab;
              if (uVar1 == 0x44f3505) goto LAB_0011325e;
            }
            else if (uVar1 == 0x57841d8) {
LAB_00113225:
              local_16c = 0xbf1c61aa;
              local_58 = 0xbfc90fdb;
              local_40 = 0x3fc90fdb;
              local_54 = 0xbf9c61aa;
              local_17c = 0x3f1c61aa;
              local_178 = 0x3f9c61aa;
              goto LAB_00113681;
            }
          }
          else {
            if (uVar1 == 0xe2d6423) goto LAB_00113325;
            if (uVar1 == 0xe878ecd) {
LAB_0011325e:
              local_54 = 0xbfc90fdb;
              local_178 = 0;
              goto LAB_00113752;
            }
            if (uVar1 == 0xfb0fa10) goto LAB_00113225;
          }
          goto LAB_001131e4;
        }
LAB_001132a8:
        local_16c = 0;
        local_58 = 0;
        local_40 = 0;
        local_54 = 0xc00ba058;
        local_17c = 0;
        local_178 = 0;
      }
      else {
        if (uVar1 < 0x1c230510) {
          if (uVar1 == 0x1c23050f) goto LAB_00113325;
          if (uVar1 < 0x1a3bb0b1) {
            if (uVar1 == 0x1a3bb0b0) {
LAB_001132ec:
              local_16c = 0;
              local_58 = 0;
              local_40 = 0;
              local_54 = 0xbfdf66f3;
              local_17c = 0;
              local_178 = 0;
              goto LAB_00113681;
            }
            if (uVar1 == 0x111795ae) goto LAB_001132a8;
            if (uVar1 == 0x1765b430) goto LAB_0011337b;
          }
          else if (uVar1 == 0x1ba73ab3) goto LAB_001132ec;
          goto LAB_001131e4;
        }
        if (uVar1 == 0x1d1b6ac1) goto LAB_0011378f;
        if (uVar1 == 0x1d3fce6a) {
          local_16c = 0xbf490fdb;
          local_58 = 0;
          local_40 = 0;
          local_54 = 0xbe860a92;
          local_17c = 0x3f490fdb;
          local_178 = 0x3f5f66f3;
          goto LAB_00113681;
        }
        if (uVar1 != 0x1dad0ff8) goto LAB_001131e4;
LAB_0011337b:
        local_16c = 0xbe32b8c2;
        local_58 = 0xbf32b8c2;
        local_40 = 0x3f32b8c2;
        local_54 = 0xbeb2b8c2;
        local_17c = 0x3e32b8c2;
        local_178 = 0x3f32b8c2;
      }
LAB_001137c3:
      local_164 = local_178;
      local_160 = local_17c;
    }
LAB_00113699:
    local_70 = 2;
    local_6c = 2;
    local_68 = 2;
    local_3c = local_164;
    local_50 = local_16c;
    local_38 = local_160;
  }
  else {
    if (uVar1 < 0xf06d7f53) {
      if (uVar1 == 0xf06d7f52) {
LAB_0011373e:
        local_54 = 0xbf5f66f3;
        local_178 = 0x3f32b8c2;
LAB_00113752:
        local_16c = 0;
        local_58 = 0;
        local_40 = 0;
        local_17c = 0;
        goto LAB_00113772;
      }
      if (uVar1 < 0xe8b83173) {
        if (uVar1 == 0xe8b83172) {
LAB_00113467:
          local_16c = 0;
          local_58 = 0;
          local_40 = 0;
          local_54 = 0;
          local_17c = 0;
          local_178 = 0x3fc90fdb;
LAB_00113681:
          local_164 = local_178;
          local_160 = local_17c;
          goto LAB_00113699;
        }
        if (uVar1 < 0xe347fe68) {
          if (uVar1 == 0xe347fe67) goto LAB_0011353a;
          if (uVar1 == 0xe0229fd7) goto LAB_0011364d;
          if (uVar1 == 0xe2708aba) goto LAB_00113467;
        }
        else if (uVar1 == 0xe7f5e047) {
LAB_001134ab:
          local_16c = 0xbf060a92;
          local_58 = 0xbf060a92;
          local_40 = 0x3f060a92;
          local_54 = 0xbfa78d36;
          local_17c = 0x3f060a92;
          local_178 = 0x3f91361e;
          goto LAB_001137c3;
        }
      }
      else {
        if (uVar1 == 0xe98f45af) {
LAB_0011353a:
          local_16c = 0;
          local_58 = 0;
          local_40 = 0;
          local_54 = 0xbf490fdb;
          local_17c = 0;
          local_178 = 0x3f75be0b;
          goto LAB_001137c3;
        }
        if (uVar1 == 0xead6d58e) goto LAB_001135c6;
        if (uVar1 == 0xeb53e377) {
          local_16c = 0xbf490fdb;
          local_58 = 0xbfc90fdb;
          local_40 = 0x3fc90fdb;
          local_54 = 0xbf5f66f3;
          local_17c = 0x3f490fdb;
          local_178 = 0x3e860a92;
          goto LAB_00113772;
        }
      }
    }
    else if (uVar1 < 0xf6e2e9f2) {
      if (uVar1 == 0xf6e2e9f1) {
        local_16c = 0xbf490fdb;
        local_54 = 0xbf490fdb;
        local_17c = 0x3f490fdb;
        local_178 = 0x3f490fdb;
LAB_001137b7:
        local_58 = 0xbf490fdb;
        local_40 = 0x3f490fdb;
        goto LAB_001137c3;
      }
      if (uVar1 == 0xf1de18be) {
LAB_001135c6:
        local_16c = 0xbf490fdb;
        local_58 = 0xbf75be0b;
        local_40 = 0x3f75be0b;
        local_54 = 0xbf32b8c2;
        local_17c = 0x3fb2b8c2;
        local_178 = 0x3fdf66f3;
        goto LAB_00113772;
      }
      if ((uVar1 == 0xf32e5b7a) || (uVar1 == 0xf5ec631b)) {
        local_54 = 0xbf060a92;
        local_58 = 0;
        local_40 = 0;
        local_17c = 0xbfdf66f3;
        local_178 = 0x3f060a92;
LAB_00113675:
        local_16c = local_17c;
        local_17c = 0x3edf66f3;
        goto LAB_00113681;
      }
    }
    else {
      if (uVar1 == 0xf8aee8f8) {
LAB_0011378f:
        local_16c = 0xbeb2b8c2;
        local_54 = 0xbf860a92;
        local_17c = 0x3eb2b8c2;
        local_178 = 0x3ff5be0b;
        goto LAB_001137b7;
      }
      if (uVar1 == 0xfaa5c49a) goto LAB_0011373e;
      if (uVar1 == 0xfb2bce6d) {
LAB_0011364d:
        local_54 = 0xbf91361e;
        local_58 = 0xbf490fdb;
        local_40 = 0x3f490fdb;
        local_17c = 0xbedf66f3;
        local_178 = 0x3e860a92;
        goto LAB_00113675;
      }
    }
LAB_001131e4:
    local_70 = 1;
    local_6c = 1;
    local_68 = 1;
  }
  FUN_00302790(*(undefined4 *)(param_1 + 0x504),local_14c);
  FUN_001376b0();
  return;
}
