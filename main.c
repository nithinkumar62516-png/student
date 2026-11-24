#include <stdio.h>
#include "student.h"
#include<string.h>

int main()
{
    ST *head = NULL;
    char op;

    stud_load(&head);

         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
    do
    {
        printf("\n\n**** STUDENT RECORD MENU ****\n");
        printf("\nA/a : Add New Record");
        printf("\nD/d : Delete a Record");
        printf("\nS/s : Show the List");
        printf("\nM/m : Modify a Record");
        printf("\nV/v : Save");
        printf("\nT/t : Sort the List");
        printf("\nE/e : Exit");

        printf("\n\nEnter Your Choice: ");
        scanf(" %c", &op);

        switch(op)
        {
            case 'A':
            case 'a':
                stud_add(&head);
                break;

            case 'D':
            case 'd':
                stud_del(&head);
                break;

            case 'S':
            case 's':
                stud_show(head);
                break;

            case 'M':
            case 'm':
                stud_modify(head);
                break;

            case 'V':
            case 'v':
                stud_save(head);
                break;

            case 'T':
            case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }
                
            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                if(choice == 'S' || choice == 's')
                {
                    student_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
    } while(op != 'E' && op != 'e');

    return 0;
}
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

         case 't':
                stud_sort(head);
                break;

            case 'E':
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                char choice;

         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

         case 't':
                stud_sort(head);
                break;

            case 'E':
            case 'e':
            {
                char choice;

                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                printf("\nS/s : Save and Exit");
                printf("\nE/e : Exit Without Saving");

                printf("\n\nEnter Your Choice: ");
                scanf(" %c", &choice);

                if(choice == 'S' || choice == 's')
                {
                    stud_save(head);
                    printf("\nSaved and Exiting...\n");
                    return 0;
                }
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
                if(choice == 'E' || choice == 'e')
                {
                    printf("\nExiting without saving...\n");
                    return 0;
                }

            }

            default:
                printf("\nInvalid choice!\n");
        }

    } while(op != 'E' && op != 'e');

    return 0;
}
}
