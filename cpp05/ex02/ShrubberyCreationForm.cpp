/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:32:44 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/06 16:18:46 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(145, 137, "default_shrubbery")
{
	setTarget("default");
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm(145, 137, target + "_shrubbery")
{
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& cpy) : AForm(cpy.getGradeToSign(), cpy.getGradeToExecute(), cpy.getName())
{
	setTarget(cpy.getTarget());
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if (this == &src)
		return (*this);
	setTarget(src.getTarget());
	return (*this);
}

void		ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (!this->getisSigned())
		throw std::runtime_error("The form is not signed.");
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream ofs((getTarget() + "_shrubbery").c_str());
		if (!ofs.is_open())
		{
			std::cerr << "Error opening file" << std::endl;
			return;
		}
		try
		{
			ofs << "              _{\\ _{\\{\\/}/}/}__\n"
						"             {/{/\\}{/{/\\}(\\}{/\\} _\n"
						"            {/{/\\}{/{/\\}(_){/{/\\}  _\n"
						"         {\\{/(/}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
						"        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
						"       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
						"      {/{/{\\{\\{(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
						"      _{\\{/{\\{/(_)/}/}{/{/{/\\}\\})\\}{/\\}\n"
						"     {/{/{\\{(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
						"      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
						"       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
						"      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{(/}/}\\}/}\n"
						"       {/{\\{\\/}(_){\\{\\{(/}/}{\\(_)/}/}\\}\n"
						"         {/(/{/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
						"          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
						"            {/{/{\\{\\/}{/{\\{\\{(_)/}\n"
						"             {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
						"              {){/ {\\/}{\\/} \\}\\}\n"
						"              (_)  \\.-'.-/\n"
						"          __...--- |'-.-'| --...__\n"
						"   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
						" -\"    ' .  . '    |.'-._| '  . .  '   \n"
						" .  '-  '    .--'  | '-.'|    .  '  . '\n"
						"          ' ..     |'-_.-|\n"
						"  .  '  .       _.-|-._ -|-._  .  '  .\n"
						"              .'   |'- .-|   '.\n"
						"  ..-'   ' .  '.   `-._.-'   .'  '  - .\n"
						"   .-' '        '-._______.-'     '  .\n"
						"        .      ~,\n"
						"    .       .   |\\   .    ' '-.\n"
						"    ___________/  \\____________\n"
						"   /  Why is it, when you want \\\n"
						"  |  something, it is so damn   |\n"
						"  |    much work to get it?     |\n"
						"   \\___________________________/\"\n";
						ofs.close();
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error while writing to file: " << e.what() << std::endl;
			return;
		}
	}
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}
