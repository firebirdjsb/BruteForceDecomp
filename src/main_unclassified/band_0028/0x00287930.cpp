/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C16F20ACA6DEAD7B3F1AFC11C742B68782A3B09E053D9AE42AC90E3AABB02768
 * Entry: 0x00287930, Ghidra index: 9096, label: FUN_00287930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00287930(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *unaff_EBX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piStack_c;
  int *local_8;
  int *piStack_4;
  
  piStack_4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f)
                        >> 1);
  FUN_00288050(param_2,piStack_4,param_3 + -1);
  piStack_c = piStack_4 + 1;
  if (param_2 < piStack_4) {
    while( true ) {
      puVar3 = (uint *)(**(code **)(*(int *)piStack_4[-1] + 0xc))((int *)piStack_4[-1]);
      puVar4 = (uint *)(**(code **)(*(int *)*piStack_4 + 0xc))((int *)*piStack_4);
      if (*puVar3 < *puVar4) break;
      puVar3 = (uint *)(**(code **)(*(int *)*piStack_4 + 0xc))((int *)*piStack_4);
      puVar4 = (uint *)(**(code **)(*(int *)piStack_4[-1] + 0xc))((int *)piStack_4[-1]);
      if ((*puVar3 < *puVar4) || (piStack_4 = piStack_4 + -1, piStack_4 <= param_2)) break;
    }
  }
  piVar6 = piStack_c;
  local_8 = piStack_c;
  piVar7 = piStack_4;
  if (piStack_c < param_3) {
    while( true ) {
      puVar3 = (uint *)(**(code **)(*(int *)*piStack_c + 0xc))((int *)*piStack_c);
      puVar4 = (uint *)(**(code **)(*(int *)*piStack_4 + 0xc))((int *)*piStack_4);
      piVar6 = piStack_c;
      local_8 = piStack_c;
      if (*puVar3 < *puVar4) break;
      puVar3 = (uint *)(**(code **)(*(int *)*piStack_4 + 0xc))((int *)*piStack_4);
      puVar4 = (uint *)(**(code **)(*(int *)*piStack_c + 0xc))((int *)*piStack_c);
      if ((*puVar3 < *puVar4) ||
         (piStack_c = piStack_c + 1, piVar6 = piStack_c, local_8 = piStack_c, param_3 <= piStack_c))
      break;
    }
  }
joined_r0x00287a18:
  do {
    if (param_3 <= piStack_c) {
joined_r0x00287ae8:
      for (; param_2 < piStack_4; piStack_4 = piStack_4 + -1) {
        puVar3 = (uint *)(**(code **)(*(int *)piStack_4[-1] + 0xc))((int *)piStack_4[-1]);
        puVar4 = (uint *)(**(code **)(*(int *)*piVar7 + 0xc))((int *)*piVar7);
        if (*puVar4 <= *puVar3) {
          puVar3 = (uint *)(**(code **)(*(int *)*piVar7 + 0xc))((int *)*piVar7);
          puVar4 = (uint *)(**(code **)(*(int *)piStack_4[-1] + 0xc))((int *)piStack_4[-1]);
          if (*puVar3 < *puVar4) break;
          piVar5 = (int *)piVar7[-1];
          piVar7 = piVar7 + -1;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          piVar1 = (int *)*piVar7;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *piVar7 = 0;
          }
          piVar1 = (int *)piStack_4[-1];
          *piVar7 = (int)piVar1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = (int *)piStack_4[-1];
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            piStack_4[-1] = 0;
          }
          piStack_4[-1] = (int)piVar5;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))(piVar5);
            (**(code **)(*piVar5 + 8))(piVar5);
          }
        }
      }
      if (piStack_4 == param_2) {
        if (piStack_c == param_3) {
          *param_1 = piVar7;
          param_1[1] = piVar6;
          return;
        }
        if (piVar6 != piStack_c) {
          piVar5 = (int *)*piVar7;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          piVar1 = (int *)*piVar7;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *piVar7 = 0;
          }
          piVar1 = (int *)*piVar6;
          *piVar7 = (int)piVar1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
            piVar1 = (int *)*piVar6;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
              *piVar6 = 0;
            }
          }
          *piVar6 = (int)piVar5;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))(piVar5);
            (**(code **)(*piVar5 + 8))(piVar5);
          }
        }
        local_8 = piVar6 + 1;
        piVar6 = (int *)*piVar7;
        piVar5 = piVar7 + 1;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        piVar1 = (int *)*piVar7;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar7 = 0;
        }
        piVar1 = (int *)*piStack_c;
        *piVar7 = (int)piVar1;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(piVar1);
          piVar7 = (int *)*piStack_c;
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 8))(piVar7);
            *piStack_c = 0;
          }
        }
        *piStack_c = (int)piVar6;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
          (**(code **)(*piVar6 + 8))(piVar6);
        }
      }
      else {
        piStack_4 = piStack_4 + -1;
        if (piStack_c == param_3) {
          piVar7 = piVar7 + -1;
          if (piStack_4 != piVar7) {
            piVar5 = (int *)*piStack_4;
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 4))(piVar5);
            }
            piVar1 = (int *)*piStack_4;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
              *piStack_4 = 0;
            }
            piVar1 = (int *)*piVar7;
            *piStack_4 = (int)piVar1;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 4))(piVar1);
              piVar1 = (int *)*piVar7;
              if (piVar1 != (int *)0x0) {
                (**(code **)(*piVar1 + 8))(piVar1);
                *piVar7 = 0;
              }
            }
            *piVar7 = (int)piVar5;
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 4))(piVar5);
              (**(code **)(*piVar5 + 8))(piVar5);
            }
          }
          piVar5 = (int *)*piVar7;
          piVar6 = piVar6 + -1;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))(piVar5);
          }
          piVar1 = (int *)*piVar7;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *piVar7 = 0;
          }
          piVar1 = (int *)*piVar6;
          *piVar7 = (int)piVar1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
            piVar1 = (int *)*piVar6;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
              *piVar6 = 0;
            }
          }
          *piVar6 = (int)piVar5;
          local_8 = piVar6;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))(piVar5);
            (**(code **)(*piVar5 + 8))(piVar5);
          }
          goto joined_r0x00287a18;
        }
        piVar6 = (int *)*piStack_c;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        piVar5 = (int *)*piStack_c;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
          *piStack_c = 0;
        }
        piVar5 = (int *)*piStack_4;
        *piStack_c = (int)piVar5;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))(piVar5);
          piVar5 = (int *)*piStack_4;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
            *piStack_4 = 0;
          }
        }
        *piStack_4 = (int)piVar6;
        piVar5 = piVar7;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
          (**(code **)(*piVar6 + 8))(piVar6);
        }
      }
      piStack_c = piStack_c + 1;
      piVar6 = local_8;
      piVar7 = piVar5;
      goto joined_r0x00287a18;
    }
    puVar3 = (uint *)(**(code **)(*(int *)*piVar7 + 0xc))((int *)*piVar7);
    puVar4 = (uint *)(**(code **)(*(int *)*unaff_EBX + 0xc))((int *)*unaff_EBX);
    piVar5 = piVar6;
    if (*puVar4 <= *puVar3) {
      puVar3 = (uint *)(**(code **)(*(int *)*piStack_c + 0xc))((int *)*piStack_c);
      puVar4 = (uint *)(**(code **)(*(int *)*piVar7 + 0xc))((int *)*piVar7);
      if (*puVar3 < *puVar4) goto joined_r0x00287ae8;
      piVar5 = piVar6 + 1;
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
      piVar2 = (int *)*piVar6;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *piVar6 = 0;
      }
      piVar2 = (int *)*piStack_c;
      *piVar6 = (int)piVar2;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        piVar6 = (int *)*piStack_c;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
          *piStack_c = 0;
        }
      }
      *piStack_c = (int)piVar1;
      local_8 = piVar5;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    piStack_c = piStack_c + 1;
    piVar6 = piVar5;
  } while( true );
}
